#include<iostream>
#include<string>
using namespace std;

class Pal {
    string str;

public:
    Pal() {
        str = ""; 
    }

    string rev(string input) {
        int n = input.length();
        string reversed = "";
        
        for (int i = n - 1; i >= 0; i--) {
            reversed += input[i];
        }
        
        return reversed;
    }

    bool isPalindrome() {
        string reversed = rev(str);
        return str == reversed;
    }
    void get() {
        cout << "Enter a string: ";
        getline(cin, str);
    }

    void display() {
        if (isPalindrome()) {
            cout << "Yes, it is a Palindrome." << endl;
        } else {
            cout << "No, it is NOT a Palindrome." << endl;
        }
    }
};

int main() {
    Pal obj; 
    obj.get();
    obj.display();
    return 0;
}

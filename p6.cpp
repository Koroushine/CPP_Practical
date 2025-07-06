#include<iostream>
using namespace std;

class prime {
    int num;
public:
    void get() {
        cout << "Enter the number: ";
        cin >> num;
    }

    bool check(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    void generate(int a) {
        cout << "Prime numbers less than " << a << ":\n";
        for (int i = 2; i < a; i++) {
            if (check(i))
                cout << i << " ";
        }
        cout << endl;
    }

    void showCheck() {
        if (check(num))
            cout << num << " is a prime number.\n";
        else
            cout << num << " is not a prime number.\n";
    }
};

int main() {
    prime obj;
    int x;
    cout << "---MENU---";
    cout << "\nPress 1 to Check prime no.";
    cout << "\nPress 2 to Generate prime numbers";
    cout << "\nOption: ";
    cin >> x;

    if (x == 1) {
        obj.get();
        obj.showCheck();
    }
    else if (x == 2) {
        int a;
        cout << "\nEnter the limit: ";
        cin >> a;
        obj.generate(a);
    }
    else {
        cout << "Invalid option!";
    }

    return 0;
}

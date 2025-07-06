#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (!inFile) {
        cout << "Input file not found!" << endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        if (!isspace(ch)) {
            outFile.put(ch);
        }
    }

    inFile.close();
    outFile.close();
    cout << "Whitespaces removed and content copied to output.txt" << endl;

    return 0;
}

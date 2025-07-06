#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream inf("stude.txt");

    if (!inf) {
        cout << "File not found. Please check the name of the file and try again!" << endl;
    } else {
        string line;
        while (getline(inf, line)) {
            cout << line << endl;
        }
    }

    inf.close();
    return 0;
}

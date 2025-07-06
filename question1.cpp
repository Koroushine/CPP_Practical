#include<iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;
public:
    void get() {
        cin.ignore();
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter roll No. : ";
        cin >> rollNo;
        cout << "Enter Marks : ";
        cin >> marks;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter the No. of students : ";
    cin >> n;

    Student *obj = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the details of student " << i + 1 << ":" << endl;
        (obj + i)->get();
    }

    for (int i = 0; i < n; i++) {
        cout << "Details of student " << i + 1 << ":" << endl;
        (obj + i)->display();
    }


    delete[] obj;
    return 0;
}

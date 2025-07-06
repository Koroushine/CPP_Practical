#include <iostream>
using namespace std;

class Person {
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

protected:
    string name;
    int age;
};

class Student : public Person {
public:
    void input() {
        Person::input();
        cout << "Enter class: ";
        cin >> studentClass;
    }

    void display() {
        Person::display();
        cout << "Class: " << studentClass << endl;
    }

private:
    string studentClass;
};

class Teacher : public Person {
public:
    void input() {
        Person::input();
        cout << "Enter subject : ";
        cin >> designation;
    }

    void display() {
        Person::display();
        cout << "Subject: " << designation << endl;
    }

private:
    string designation;
};

int main() {
    Student s;
    Teacher t;

    cout << "Enter student details:\n";
    s.input();

    cout << "\nEnter teacher details:\n";
    t.input();

    cout << "\nStudent details:\n";
    s.display();

    cout << "\nTeacher details:\n";
    t.display();

    return 0;
}

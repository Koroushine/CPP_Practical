#include <iostream>
using namespace std;

class Triangle {
public:
    double base, height;

    void get() 
    {  
        cout << "Enter base : ";
        cin >> base;
        cout << "Enter hight : ";
        cin >> height;
    }

    double area() 
    {  
        double result = 0.5 * base * height;
        return result;
    }

    double area(double side) 
    {  
        double result = (3 * side * side) / 4;  // Approximate sqrt(3) as 3/4
        return result;
    }

    Triangle operator=(Triangle t) 
    {  
        base = t.base;
        height = t.height;
        return t;
    }

    bool operator==(Triangle t) 
    {  
        return base == t.base && height == t.height;
    }
};

int main() 
{
    Triangle t;
    t.get();
    cout <<"Name : Korounganba Thokchom"<<endl;
    cout <<"Roll No. : 2229"<<endl;
    cout << "Area of Triangle: " << t.area() << endl;
    cout << "Area of Equilateral Triangle with side 4: " << t.area(4) << endl;

    return 0;
}

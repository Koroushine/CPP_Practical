#include <iostream>
using namespace std;
class Box
{
    double length, breadth, height;
    public:
        void get()
        {
            cout<< "Enter the Length : ";
            cin>>length;
            cout<<"Enter the breadth : ";
            cin>>breadth;
            cout<<"Enter the height : ";
            cin>>height;
        }
        double area()
        {
            double a;
            a = 2*(length*breadth+length*height+breadth*height);
            return a;
        }
        double volume()
        {
            double v;
            v = length*breadth*height;
            return v;
        }
};
int main()
{
    int c;
    Box obj;
    obj.get();
    cout<<"Name : Korounganba Thokchom"<<endl;
    cout<<"Roll no. : 2229"<<endl;
    cout<<"Choice 1. Calculate surface area"<<endl;
    cout<<"Choice 2. Calculate Volume"<<endl;
    cout<<"Enter your choice : ";
    cin>>c;
    if(c==1)
    {
        cout<<"The Surface area is : "<<obj.area();
    }
    else if(c==2)
    {
        cout<<"The volume is : "<<obj.volume();
    }
    else
    {
        cout<<"Invalid choice!";
    }
    return 0;
}
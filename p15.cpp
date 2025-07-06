#include <iostream>
using namespace std;
class box
{
    double length, breadth, height;
    public:
        void get()
        {
            cout<<"Enter length : ";
            cin>>length;
            cout<<"Enter breadth : ";
            cin>>breadth;
            cout<<"Enter height : ";
            cin>>height;
        }

};
int main()
{
    box obj;
    obj.get();
    return 0;
}
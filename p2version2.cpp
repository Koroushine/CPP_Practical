#include<iostream>
using namespace std;

class rev{
    int num;
    public:
        void get(){
            cout<<"Enter the number : ";
            cin>>num;
        }
        int oulta(){
            int digit = num, rem, onaba=0;
            while(digit != 0){
                rem = digit % 10;
                onaba = rem + onaba*10;
                digit = digit/10; 
            }
            return onaba;
        }
        void display(){
            cout<<"The reverse of the integer is : "<<oulta();
        }
};
int main(){
    rev obj;
    obj.get();
    obj.display();
    return 0;

}
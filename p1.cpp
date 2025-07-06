//This is a program to print the sum and product of digits of an integer.
#include<iostream>  
using namespace std; 

class digit 
{
    int num;
    public : 
        void getdata(){
            cout<<"Enter the number: ";
            cin>>num;
        }
        int sum(){
            int rem, add=0, a=num;
            while(a!=0)
            {
                rem=a%10;
                add+=rem;
                a=a/10;
            }
        return add;
        }
        int product(){
            int rem=1, pro=1, a=num;
            while(a!=0)
            {
                rem=a%10;
                pro*=rem;
                a=a/10;
            }
        return pro;
        }
        void display(){
            cout<<"The sum of the number is : "<<sum()<<endl;
            cout<<"The Product of the number is :"<<product()<<endl;
        }
};

int main(){
    digit obj;
    obj.getdata();
    obj.display();
    return 0;
}
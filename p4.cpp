
#include<iostream>
using namespace std;

class series{
    int num;
    public:
        void get(){
            cout<<"Enter the nth term till which you want the series : ";
            cin>>num;
        }
        int op(){
            int digit = num, result = 1, i = 2;
            cout<<"1";
            while(i <= digit){
                if(i%2==0){
                    result -= i;
                    cout<<" - ";
                }
                else{
                    result += i;
                    cout<<" + ";
                }
                cout<<i;
                i++;
            }
            cout<<"\nThe result of the series is : "<<result;
        }
        void display(){
            cout<<"Series : "<<op();
        }
};
int main(){
    series obj;
    obj.get();
    obj.display();
    return 0;
}
#include<iostream> 
using namespace std; //std::cout

class thaimei{
    int num;
    public:
        void get(){
            cout<<"Enter the integer : ";
            cin>>num;
        }
        int op(){
            int digit = num, rem, sum = 0, pro = 1;
            while(digit != 0){
                rem = num%10;
                sum += rem;
                pro *= rem;
                digit = digit/10;
            }
                cout<<"\nSum of the digits : "<<sum;
                cout<<"\nProduct of the digits : "<<pro;
            
            return 0;
        }
};

int main(){
    thaimei obj;
    obj.get();
    obj.op();
    return 0;
}
#include<iostream>
using namespace std;

class series
{
    int term;
    public:
        void get(){
            cout<<"Enter the no. of terms : ";
            cin>>term;
        }
        void l(){
            int i=2;
            double sum = 1.0;
            cout<<"1";
            while(i<=term){
                cout<<" + "<<"1/"<<i;
                sum += 1.0/i;
                i++;
            }
            cout<<"\nThe sum : "<<sum;
        }
        void display(){
            cout<<"Series : ";
            l();
        }
};
int main(){
    series obj;
    obj.get();
    obj.display();
    return 0;
}

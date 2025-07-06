#include<iostream>
using namespace std;

class series{
    int num;
    public:
        void get(){
            cout<<"enter the no. of the series : ";
            cin>>num;
        }
        int satees(){
            int nth = num, sum = 1, a=1, i = 2;
            cout<<a;
            while(i <= nth){
                cout<<" + "<<"1/"<<i;
                sum += 1/i;
                i++;
            }
            cout<<"\nThe sum of the series till "<<nth<<"th term is : "<<sum;
        }
        void display(){
            cout<<"---Output---";
            cout<<"\nSeries : "<<satees();
        }
};
int main(){
    series obj;
    obj.get();
    obj.display();
    return 0;
}
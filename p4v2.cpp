#include<iostream>
using namespace std;

class series{
    int nth;
    public:
        void get(){
            cout<<"Enter the no. of terms : ";
            cin>>nth;
        }
        void l(){
            int r = 1, i=2;
            cout<<"Series : ";
            cout<<"1";
            while(i!=nth){
                
                if(i%2==0){
                    cout<<" - "<<i;
                    r -=i;
                }
                else{
                    cout<<" + "<<i;
                    r +=i;
                }
                i++;
            }
            cout<<"\nThe sum = "<<r;
        }
};

int main(){
    series obj;
    obj.get();
    obj.l();
    return 0;
}
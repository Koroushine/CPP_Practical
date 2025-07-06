/*Program to give the series S=1+1/2+1/3+1/4*/
#include <iostream>
using namespace std;
class series
{
    int num;
    public:
        void getdata();
        float sum();
        void display();
};

void series::getdata()
{
    cout<<"Enter the no. of terms : "<<endl;
    cin>>num;
}

float series::sum()
{
    float a=1, i=2, add;
    if(num>0){
        
        while(i<=num){
            cout<<a<< " + "<<"1/i";
            add+=1/i;
            i++;
        };
    }
    else{
        cout<<"Invalid";
    }
    return add;
}
void series::display(){
    cout<<" Series";
    cout<<"Sum = "<<sum();
}
int main(){
    series obj;
    obj.getdata();
    obj.display();
    return 0;
}
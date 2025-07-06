/*Program to give the reverse of a number*/
#include<iostream>
using namespace std;

class digit
{
    int num;
    public:
        void getdata(){
            cout << "Enter the number: ";
            cin >> num;
        }
        string word_switch(int num){
            string word = num;
            return word;
        }
        string rev_str(){
            for
        }
        void id(){
            int rem, i, a=num;
            while(a!=0){
                rem = a%10;
                a= a/10;
                if (rem == 0){
                    word_switch(int num)
                }
            }
            
        }
        int reverse(){
            int rem, rev = 0, a = num;  
            while(a != 0)
            {
                rem = a % 10;             
                rev = rev * 10 + rem;      
                a = a / 10;                
            }
            return rev;
        }
        void display(){
            cout << "The reverse of the number " << num << " is: " << reverse() << endl;
        }
};

int main(){
    digit obj;
    obj.getdata();
    obj.display();
    return 0;
}

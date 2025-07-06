#include<iostream>
using namespace std;

class pal{
    string word;
    public:
        void get(){
            cout<<"Enter the string : ";
            cin>>word;
        }
        string op(){
            int size;        
            string rev = "";
            size = word.length()-1;
            while(size >= 0){
                rev += word[size];
                size--;
            }
            cout<<"Reverse of the string : "<<rev;
            if(word == rev){
                cout<<"\nThe string is Palindrome!";
            }
            else{
                cout<<"\nThe string is not Palindrome!";
            }
        }
};
int main(){
    pal obj;
    obj.get();
    obj.op();
    return 0;
}
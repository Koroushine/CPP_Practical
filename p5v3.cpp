#include<iostream>
using namespace std;

class pa{
    string word;
    public:
        void get(){
            cout<<"Enter your string : ";
            cin>>word;
        }
        void check(){
            int no;
            string rev = "";
            no = word.length();
            for(int i = no; i>=0; i--){
                rev += word[i];
            }
            cout<<"\nReverse of "<<word<<" is : "<<rev;
            if(word == rev){
                cout<<"\nIt is palindrome!";
            }
            else{
                cout<<"\nIt is not palindrome!";
            }
        }
};

int main(){
    pa obj;
    obj.get();
    obj.check();
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream inf("text1.txt");
    ifstream ing("text2.txt");
    ofstream outf("final.txt");
    char a;
    char b;
    while(inf.get(a) and ing.get(b)){
        for(int i=0;i<2;i++){
            if (i%2==0){
                outf.put(a);
            }
            else{
                outf.put(b);
            }  
        }
    }
    ing.close();
    outf.close();

}
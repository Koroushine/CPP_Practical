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
        if (inf){
            outf.put(a);
        }
        if(ing){
            outf.put(b);
        }  
        if(!inf && !ing){
            break;
        }
    }
    ing.close();
    outf.close();
}
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream inf("text1.txt");
    ifstream ing("text2.txt");
    ofstream outf("final.txt");
    char a;
    char b;
    while(inf.get(a)){
        outf.put(a);
    }
    inf.close();
    while(ing.get(b)){
        outf.put(b);
    }
    ing.close();
    outf.close();

}
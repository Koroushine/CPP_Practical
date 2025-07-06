#include<iostream>
#include<fstream>
using namespace std;
class bca
{
    string name;
    public:
        bca(){
        }
        bca(string x){
            name = x;
        }
};
int main(){
    bca obj[2] = {bca("Tom"), bca("James")};
    fstream file;
    file.open("Text1.dat", ios::binary | ios::out);
    for(int i = 0;i<2;i++){
        file.write((char*)&obj[i], sizeof(obj[i]));
    }
    file.close();
    file.open("text1.dat", ios::binary | ios::in);
    bca obj_r;
    int count = 0;
    while(file.read((char*)&obj_r, sizeof(obj_r))){
        count++;
    }
    file.close();
    cout<<"Number of object : "<<count;
    return 0;
}
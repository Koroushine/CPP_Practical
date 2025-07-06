#include<iostream>
#include<fstream>
using namespace std;
class bca
{
    string name;
    public:
        void getdata(){
            cout<<"Name : ";
            cin>>name;
        }
};

int main()
{
    int c;
    bca obj;
    fstream file;
    file.open("text.dat", ios::binary | ios::out);
    do{
        cout<<"Enter 1 to input and 0 to terminate : ";
        cin>>c;
        switch(c)
        {
            case 1:
                obj.getdata();
                file.write((char*)&obj, sizeof(obj));
                break;
            case 0:
                cout<<"Terminated";
                break;
            default:
                cout<<"Invalid!";
    
        }
    }while(c!=0);
    file.close();

    file.open("text.dat", ios::binary | ios::in);
    int count = 0;
    while(file.read((char*)&obj, sizeof(obj))){
        count++;
    }
    file.close();
    cout<<"No of object are: "<<count;
    return 0;
}

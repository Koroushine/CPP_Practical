#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int roll[5], year[4], total_mark[6];
	string name[10], class_n[5];
	for(int i = 0; i < 2; i++)
	{
		cout<<"enter details of student : "<<i+1<<endl;
		cout<<"Roll no: ";
		cin>>roll[i];
        cin.ignore();
		cout<<"Name : ";
		getline(cin, name[i]);
		cout<<"Class : ";
		getline(cin, class_n[i]);
		cout<<"Year : ";
		cin>>year[i];
		cout<<"Total Marks : ";
		cin>>total_mark[i];
	}
	ofstream outf;
	
    outf.open("stude.txt");
	
    // Header
    outf << "RollNo  Name  Class  Year  Marks" << endl;

    // Data rows
    for (int i = 0; i < 2; i++) {
        outf << roll[i] << "     "
             << name[i] << "  "
             << class_n[i] << "      "
             << year[i] << "  "
             << total_mark[i] << endl;
    }
	outf.close();
	return 0;
}

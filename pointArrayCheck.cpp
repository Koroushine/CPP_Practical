#include<iostream>
using namespace std;

int main()
{
    int num, i;
    int arr[10]={1, 49, 4, 37, 88, 3, 19, 45, 62, 87};
    int *ptr = arr;
    cout<< "Array : ";
    for(i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    };
    cout<<endl;
    int s;
    cout<<"Enter your no. : ";
    cin>>s;
    for(i=0; i<10; i++)
    {
        if(s == *(ptr + i))
        {
            cout<<s<<" is present in the array"<<endl;
            break;
        }
        else if (i == 9)  
        {
            cout << s << " is not present in the array." << endl;
        }
    };

    return 0;
}
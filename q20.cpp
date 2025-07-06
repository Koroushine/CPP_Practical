// Program that can take 10 integers and store them in an array and will print them in ascending and descending order.
#include <iostream>
using namespace std;

class q20 
{
    int* arr;

public:
    q20() 
	{
        arr = new int[10];
    }
    ~q20() 
	{
        delete[] arr;
    }
    void getdata() 
	{
        cout << "Enter 10 elements: ";
        for (int i = 0; i < 10; i++) 
		{
            cin >> *(arr + i);
        }
    }
    void asc() 
	{
        int temp;
        for (int i = 0; i < 9; i++) 
		{
            for (int j = i + 1; j < 10; j++) 
			{
                if (*(arr + i) > *(arr + j)) 
				{
                    temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
        }
    }
    void display_asc() 
	{
        cout << "Ascending Order:" << endl;
        for (int i = 0; i < 10; i++) 
		{
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }
    void display_desc() 
	{
        cout << "Descending Order:" << endl;
        for (int i = 9; i >= 0; i--) 
		{
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }
};

int main() 
{
    q20 obj;
    obj.getdata();
    obj.asc();             
    obj.display_asc();    
    obj.display_desc();
	return 0;
}
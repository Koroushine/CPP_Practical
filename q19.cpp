// Program to take input to create a list and reverse it again
#include<iostream>
using namespace std;

class q19 {
public:
    void getdata(int *arr, int n) {
        arr[0] = n;
        for(int i = 1; i <= n; i++) {
            cout << "arr[" << i << "]=";
            cin >> arr[i];
        }
    }
    
    void reverse(int *arr) {
        int size = arr[0];
        int *start = arr + 1;
        int *end = arr + size;
        while (start < end) {
            int temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
    
    void display(int *arr) {
        int n = arr[0];
        for(int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    int n;
    cout << "Enter the array size:";
    cin >> n;
    int* arr = new int[n + 1];  // Dynamic allocation

    q19 obj;
    obj.getdata(arr, n);
    obj.reverse(arr);
    obj.display(arr);

    delete[] arr;  // Free memory
    return 0;
}

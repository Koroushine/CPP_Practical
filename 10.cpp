#include <iostream>
using namespace std;

class SumCalculator {
public:
    void calculateSum() {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;
        
        // Dynamically allocate memory for array
        int* arr = new int[n];
        
        cout << "Enter " << n << " elements: ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        cout << "Sum of elements: " << sum << endl;
        
        // Free the allocated memory
        delete[] arr;
    }
};

int main() {
    SumCalculator calc;  // Create object
    calc.calculateSum(); // Call the method
    
    return 0;
}
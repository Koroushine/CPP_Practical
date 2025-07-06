#include <iostream>
using namespace std;

class ArrayMerger {
public:
    void merge() {
        // Input first array
        cout << "Enter size of first array: ";
        cin >> n;
        cout << "Enter sorted elements: ";
        for(int i = 0; i < n; i++) cin >> arr1[i];
        
        // Input second array
        cout << "Enter size of second array: ";
        cin >> m;
        cout << "Enter sorted elements: ";
        for(int i = 0; i < m; i++) cin >> arr2[i];
        
        // Merge arrays
        int i = 0, j = 0;
        mergedSize = 0;
        while(i < n && j < m) {
            if(arr1[i] < arr2[j]) merged[mergedSize++] = arr1[i++];
            else merged[mergedSize++] = arr2[j++];
        }
        while(i < n) merged[mergedSize++] = arr1[i++];
        while(j < m) merged[mergedSize++] = arr2[j++];
    }
    
    void display() {
        cout << "Merged array: ";
        for(int i = 0; i < mergedSize; i++) {
            cout << merged[i] << " ";
        }
        cout << endl;
    }

private:
    int arr1[100], arr2[100], merged[200];
    int n, m, mergedSize;
};

int main() {
    ArrayMerger merger;
    merger.merge();
    merger.display();
    return 0;
}

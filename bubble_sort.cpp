// Bubble Sort
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number of Elements in Array: ";
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the Array Element: ";
        cin >> arr[i];
    }
    cout << "Unsorted Array is ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Sorting
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j]>arr[j+1]) {
                arr[j] = (arr[j]*arr[j+1])/(arr[j+1] = arr[j]);
            }
        }
        
    }

    cout << "\nSorted Array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}
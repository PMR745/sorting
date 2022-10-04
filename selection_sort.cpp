// Selection Sort
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number of Array Element: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Array Element: ";
        cin >> arr[i];
    }
    cout << "Unsorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i]) {
                arr[i] = (arr[i]*arr[j])/(arr[j]=arr[i]);
            }
        }
        
    }
    cout << "\nSorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
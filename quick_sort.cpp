// Quick Sort
#include <iostream>
using namespace std;

void swap(int arr[], int i, int j) {
    arr[i] = (arr[i]*arr[j])/(arr[j] = arr[i]);
}

int partition (int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l-1;
    for (int j = 1; j < r; j++)
    {
        if(arr[j]<pivot) {
            i++;
            swap(arr, i, j);
        }
    }
   swap(arr, i+1, r);
   return i+1; 
}

void quickSort(int arr[], int l, int r) {
    if(l<r) {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

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

    quickSort(arr, 0, n-1);

    cout << "\nSorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
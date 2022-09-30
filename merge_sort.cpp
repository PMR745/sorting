#include <iostream>
using namespace std;

void merge(int arr[], int beg, int mid, int end) {
    int i, j, k;
    // cout << "Here: " << beg << " " << mid << " " << end << endl;
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    // cout << n1 << " " << n2 << endl;

    int temp1[n1], temp2[n2]; // Temporary Arrays
    for (int i = 0; i < n1; i++)
    {
        temp1[i] = arr[beg+i];
    }

    for (int j = 0; j < n2; j++)
    {
        temp2[j] = arr[mid + 1 + j];
    }
    
    i = 0, j = 0, k = beg;

    while (i < n1 && j < n2) {
        if(temp1[i] < temp2[j]) {
            arr[k++] = temp1[i++];
        }
        else {
            arr[k++] = temp2[j++];
        }
    }
    
    while (i < n1) {
        arr[k++] = temp1[i++];
    }
    
    while (j < n2)
    {
        arr[k++] = temp2[j++];
    }
    
}

void mergeSort(int arr[], int beg, int end) {
    if(beg<end) {
        int mid = (beg+end)/2;
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}

int main() {
    int n;
    cout << "Enter the Number of Array Elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Element: ";
        cin >> arr[i];
    }

    // cout << "\nUnsorted Array: ";
    // for (int i = 0; i < n; i++)     // Printing Unsorted array
    // {
    //     cout << arr[i] << " ";
    // }
    
    mergeSort(arr, 0, n-1);
    
    // cout << "\nSorted Array: ";
    // for (int i = 0; i < n; i++)     // Printing Sorted Array
    // {
    //     cout << arr[i] << " ";
    // }
    
}
#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Array Element: ");
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted Array: ");
    display(arr, n);
    
    quickSort(arr, 0, 4);

    printf("\nSorted Array: ");
    display(arr, n);
}
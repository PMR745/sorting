// Sorting array with Insertion Sort
#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number of Element in Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the Element of array: ");
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted Array...\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSorting Array...\n");
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}
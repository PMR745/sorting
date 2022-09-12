#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Unsorted Array...\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nSorting Array...\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
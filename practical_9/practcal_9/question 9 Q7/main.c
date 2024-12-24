#include <stdio.h>


void mergeSortedArraysInPlace(int *arr1, int size1, int *arr2, int size2, int *arr3) {
    int i = 0, j = 0, k = 0;


    while (i < size1 && j < size2) {
        if (*(arr1 + i) <= *(arr2 + j)) {
            *(arr3 + k) = *(arr1 + i);
            i++;
        } else {
            *(arr3 + k) = *(arr2 + j);
            j++;
        }
        k++;
    }


    while (i < size1) {
        *(arr3 + k) = *(arr1 + i);
        i++;
        k++;
    }


    while (j < size2) {
        *(arr3 + k) = *(arr2 + j);
        j++;
        k++;
    }
}

int main() {
    int size1, size2;


    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];


    printf("Enter %d sorted elements for the first array: ", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }


    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];


    printf("Enter %d sorted elements for the second array: ", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Declare the third array to hold the merged values
    int arr3[size1 + size2];

    // Call the function to merge the two arrays into arr3
    mergeSortedArraysInPlace(arr1, size1, arr2, size2, arr3);

    // Print the merged array
    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

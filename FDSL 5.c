#include <stdio.h>

void insertionSort(int array[], int length) {
    for (int i = 1; i < length; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int numberOfElements;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &numberOfElements);
    
    int array[numberOfElements];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numberOfElements; i++) {
        scanf("%d", &array[i]);
    }

    insertionSort(array, numberOfElements);
    
    printf("Sorted array:\n");
    printArray(array, numberOfElements);

    return 0;
}

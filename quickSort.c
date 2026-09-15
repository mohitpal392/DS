#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function: places the pivot at its correct sorted position
int partition(int arr[], int low, int high) {
    // Select the rightmost element as the pivot
    int pivot = arr[high]; 
    
    // Index of the smaller element
    int i = (low - 1); 

    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    
    // Swap the pivot element with the element at i + 1
    swap(&arr[i + 1], &arr[high]);
    
    // Return the partitioning index
    return (i + 1);
}

// The main Quick Sort function that implements recursion
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is the partitioning index, arr[pi] is now at the right place
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%t%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test the program
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    printArray(arr, n);
    
    return 0;
}

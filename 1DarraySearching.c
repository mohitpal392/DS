#include <stdio.h>

int main() {
    // Initialize the array and its size
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target, found = 0;

    // Get the element to search from the user
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Traverse the array to find the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d (Position %d).\n", target, i, i + 1);
            found = 1;
            break; // Exit the loop once the element is found
        }
    }

    // If the element was not found in the loop
    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
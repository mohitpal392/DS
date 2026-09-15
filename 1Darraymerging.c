#include <stdio.h>

int main() {
    int A[100], B[100], C[200];
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    // Copy first array
    for (int i = 0; i < n1; i++) {
        C[i] = A[i];
    }

    // Copy second array
    for (int i = 0; i < n2; i++) {
        C[n1 + i] = B[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}



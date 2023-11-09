#include <stdio.h>

int main() {
    int arr[3]; 
    int n = 0;  

    printf("Enter two elements for the array:\n");
    for (int i = 0; i < 2; i++) {
        scanf("%d", &arr[i]);
        n++; 
    }

    if (n != 2) {
        printf("Array must have exactly 2 elements to combine.\n");
    } else {
        
        arr[2] = arr[0] + arr[1];
        n++;  

        printf("Array after combining the first two elements:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

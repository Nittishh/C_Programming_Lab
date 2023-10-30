#include <stdio.h>

void main() {
    // int numbers[5] = {1,2,6,4,5};

    // printf("Element 1: %d\n",numbers[5]);
    // printf("Element 3: %d\n",numbers[2]);

    // for(int i=0;i<5;i++){
    //     printf("%d\n",numbers[i]);
    // } 
    // int length = sizeof(numbers)/sizeof(numbers[0]);
    // printf("%d\n", length);

    // int sum = 0;
    // for(int j=0;j<length;j++){
    //     sum += numbers[j];
    // }
    // printf("Sum: %d\n", sum);




    // // User input code. 

    //  int size;

    // printf("Enter the size of the array: ");
    // scanf("%d", &size);

    // int arr[size]; 

    // // Input 
    // printf("Enter %d elements, one by one:\n", size);
    // for (int i = 0; i < size; i++) {
    //     printf("Element %d: ", i+1);
    //     scanf("%d", &arr[i]);
    // }

    // // Display
    // printf("The elements in the array are: ");
    // for (int i = 0; i < size; i++) {
    //     printf("%d ", arr[i]);
    // }

    // int max = arr[0];

    // for (int i = 1; i < size; i++) {
    //     if (arr[i] > max) {
    //         max = arr[i];
    //     }
    // }
    //     printf("\nThe largest element is: %d\n", max);

    //reverse array
    int arr[] = {45,12,67,34,89,56};
    int size=6;
    int reversed[6];

    for(int i=0; i<6; i++){
        reversed[i] = arr[5-i];
    }
    printf("Reversed array: ");
    for (int i=0; i<6; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");
}
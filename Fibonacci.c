#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);
    while( i < n) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        i++;
    }

    printf("\n");

    return 0;
}


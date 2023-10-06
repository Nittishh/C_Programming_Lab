#include <stdio.h>

int main() {
    int i, a;
    a=0;
    printf("Enter the number\n");
    scanf("%d", &i);
    printf("Number \n");
    do{
        printf("%d\n", a+=2);
    }while(a<=i-1);
    return 0;
}
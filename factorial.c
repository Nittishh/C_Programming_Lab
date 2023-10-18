#include <stdio.h>

int main() {
    int num, i ,factorial = 1;
    printf("Enter the positive integer : ");
    scanf("%d", &num);

    if (num<0){
        printf("Error!"); 
    }
    else{
        for(i=num;i>=1;i--){
            factorial*=i;
        }
        printf("%d",factorial);
    }
    return 0;
}
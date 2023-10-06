#include <stdio.h>

int main() {
    int i,a;
    a=0;
    printf ("Enter the number \n");
    scanf("%d", &i);
    printf("Numbers:\n");

    while (a<=(i-1)){
        printf("%d\n", a+=2);
    }
    return 0;
}
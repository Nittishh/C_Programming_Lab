#include<stdio.h>
int main () {
    int n,r,sum=0,num1;
    printf ("enter the number=");
    scanf ("%d",&n);
    num1=n;
    while(n>0) {
        r=n%10;
        sum=sum+ (r*r*r);
        n=n/10;
    }
    if(num1==sum){
        printf ("It is an Armstrong number.");
    }
    else{
        printf ("Its not an Armstrong number.");
    }
    return 0;
}
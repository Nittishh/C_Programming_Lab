#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    float a,b;

    printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulus \n");
    scanf("%d",&i);
    printf("Enter two number to be calculated ");
    scanf("%f%f", &a,&b);


    if( i == 1){
        printf("the sum is %f", a + b);
    }
    else if (i==2){
        printf("the sub is %f", a - b);
    }
    else if (i == 3){
        printf("the multiply is %f", a*b);
    }
    else if ( i == 4){
        printf("the div is %f", a/b);
    }
    else if ( i == 5){
        printf("the modulus %d", (int)a % (int)b);
    }
    else{
        printf("invalid input");
    }
}
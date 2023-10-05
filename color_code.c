#include<stdio.h>
void main()
{
    char code;
    printf("Enter the color code ");
    scanf("%c", &code);
    
    switch(code)
    {
        case 'r':
        case 'R':
        printf("You entered color RED ");
        break;
        case 'g':
        case 'G':
        printf("You entered color GREEN ");
        break;
        case 'b':
        case 'B':
        printf("You entered color BLUE ");
        break;
    }
}
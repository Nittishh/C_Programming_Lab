#include <stdio.h>
#include <math.h>

int main() {
    int num, digit, sum, temp, l_limit, u_limit;
    
    printf("Enter the lower limit: ");
    scanf("%d", &l_limit);
    
    printf("Enter the upper limit: ");
    scanf("%d", &u_limit);

    printf("Armstrong numbers between %d and %d:\n", l_limit, u_limit);

    for (num = l_limit; num <= u_limit; num++) {
        temp = num;
        sum = 0;

        int num_digits = log10(num) + 1;  // Count the number of digits in 'num'

        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, num_digits);  // Raise each digit to the power of num_digits
            temp = temp / 10;
        }

        if (num == sum) {
            printf("%d\n", num);
        }
    }

    return 0;
}

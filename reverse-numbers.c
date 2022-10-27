/* C program to reverse numbers */
#include <stdio.h>

int main(void)
{
    long num, reverse = 0, temp, remainder;

    printf("Enter the desired numbers:\n");

    scanf("%ld", &num);

    temp = num;

    while (num > 0)
    {
        remainder = num % 10;

        reverse = reverse * 10 + remainder;

        num /= 10;
    }
    printf("Choosen numbers = %ld\n", temp);
    printf("Reverse of the numbers is %ld\n", reverse);
}

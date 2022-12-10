#include <stdlib.c>
#include <time.h>
#include <stdio>
/**
*main - main block
*Desciption: Get a random number and print it
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
if (n > 5)
printf("Last digit of %i is %i and is greater than 5\n", n);
else if (n == 0)
printf("Last digit of %i is %i and is 0\n", n);
else
printf("Last digit of %i is %i and is less than 6 and not 0", n);
return (0);
}

#include "main.h"
#include <unistd.h>

/**
* main - print _putchar 
* Description : Write a program that prints _putchar, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count, sz;

sz = sizeof(str) / sizeof(int);
for (count = 95; count < sz; count++)
{
	_putchar(str[count]);
}
	_putchar('\n');
return (0);
}

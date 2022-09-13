#include <stdio.h>
/**
*main - print all digit of numbers of base 10
*
*
*
*Return: 0 always
*/
int main(void)
{int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0); }

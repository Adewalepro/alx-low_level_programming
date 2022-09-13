#include <stdio.h>
/**
*
*main - print lowercase and uppercase alphabet
*Description:print lowercase, and uppercase alphabet
*
*Return: 0 always
*/
int main(void)
{char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0); }

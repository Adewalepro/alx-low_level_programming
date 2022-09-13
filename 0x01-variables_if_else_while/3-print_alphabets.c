#include <stdio.h>
/**
*main - print alphabet in lowercase, and in uppercase
*Description:print lowercase, and uppercase alphabet
*
*Return: 0 always
*
*/
int main(void)
{char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0); }

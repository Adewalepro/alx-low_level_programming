#include <stdio.h>
/**
*main - print all letters except q and e
*
*
*Return: 0 always
*/
int main(void)
{char s;
for (s = 'a'; s <= 'z'; s++)
{
if (s != 'e' && s != 'q')
putchar(s); }
putchar('\n');
return (0); }

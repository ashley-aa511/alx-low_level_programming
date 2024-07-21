#include <stdio.h>
/**
 *Entry point
 *
 *Return (Success)
 *
 */
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)

{
putchar(l);
}
for (l = 'A'; l <= 'Z'; l++)
{
putchar(l);
}
putchar('\n');
return 0;
}

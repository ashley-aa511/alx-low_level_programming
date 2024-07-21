#include <stdio.h>
/**
 *Entry point of the program
 *
 *@return 0 indicating successful execution
 *
 */
int main(void)
{
char l;
/*Print lowercase alphabets*/
for (l = 'a'; l <= 'z'; l++)

{
putchar(l);
}
/*Print uppercase alphabets*/
for (l = 'A'; l <= 'Z'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}

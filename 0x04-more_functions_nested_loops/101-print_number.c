#include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
/*Check negatives*/
	if (n < 0) 
	{
		putchar('-');
		n = -n;
        }
/**/
        if (n == 0)
		putchar('0');

        if (n/10)
		printnumber(n/10);

    	putchar(n%10 + '0');                                                                                                                                                                                                                                          
}

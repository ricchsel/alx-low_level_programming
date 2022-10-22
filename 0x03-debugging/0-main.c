#include <main.h>

/**
 * main - test if integer is positive or negative
 * Return: 0
 */

void positive_or_negative(int i)
{
	if( i > 0)
	{
		printf("is positive\n");
	}
	else if( i == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
}

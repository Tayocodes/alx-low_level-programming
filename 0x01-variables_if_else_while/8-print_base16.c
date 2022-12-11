#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints all the numbers of base 16 in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0'; /*Initialise num to 0*/
	char letter = 'a'; /*Initialise letter to a*/

	while (num <= '9') /*Print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f') /*Print a-f*/
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

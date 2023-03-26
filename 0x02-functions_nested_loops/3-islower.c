#include"../main.h"

/**
 * main - check the code for ALX School Students
 *
 * Return: Always 0 (Success)
*/
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

#include "shell.h"

/**
 * num_len - Counts the digit length of a number.
 * @num: The number to measure.
 *
 * Return: The digit length.
 */
int num_len(int num)
{
	unsigned int n;
	int len = 1;

	if (num < 0)
	{
		len++;
		n = num * -1;
	}
	else
	{
		n = num;
	}
	while (n > 9)
	{
		len++;
		n /= 10;
	}

	return (len);
}

/**
 * _itoa - Converts an integer to a string.
 * @num: The integer.
 *
 * Return: The converted string.
 */
char *_itoa(int num)
{
	char *buffer;
	int len = num_len(num);
	unsigned int n;

	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);

	buffer[len] = '\0';

	if (num < 0)
	{
		n = num * -1;
		buffer[0] = '-';
	}
	else
	{
		n = num;
	}

	len--;
	do {
		buffer[len] = (n % 10) + '0';
		n /= 10;
		len--;
	} while (n > 0);

	return (buffer);
}

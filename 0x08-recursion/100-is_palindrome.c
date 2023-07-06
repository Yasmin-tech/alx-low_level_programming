#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - a function to find if a string is palindrome
 *@s: a pointer to a string
 *
 * Return: 1 if s is palindrome, or 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - check a string is palindrome recursivly
 *@s: a pointer to a string
 *@start: first index of the string
 *@end: last index of the string
 *
 * Return: 1 if palindrom, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

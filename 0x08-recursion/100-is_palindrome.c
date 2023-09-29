#include "main.h"

/**
 * is_palindrome - checks if input string is
 *                 a palindrome.
 * @s: pointer-to-string to be checked.
 *
 * Return: 1 if palindrome, 0 if not.
*/
int is_palindrome(char *s)
{
	int l;

	l = strlen_recursion(s);
	return (palindrome_check(s, 0, l - 1));
}

/**
 * palindrome_check - checks for matching characters.
 * @s: pointer-to-string to be checked.
 * @i: first index.
 * @j: last index.
 *
 * Return: 1 if palindrome, 0 if not.
*/
int palindrome_check(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (palindrome_check(s, i + 1, j - 1));
	}
}

/**
 * strlen_recursion - Returns the length of a string.
 * @s: string whose length is to be returned.
 *
 * Return: 0 if string is NULL
 *         else returns string length.
*/
int strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (length + strlen_recursion(s + 1));
	}
}

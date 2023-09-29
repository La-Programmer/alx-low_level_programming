#include "main.h"
/**
* _strlen_recursion - Returns the length of a string
* @s: String to be counted
* Return: nothing
*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (i = 0);
	return (i = 1 + _strlen_recursion(s + 1));
}
/**
* palindrome - Recursively checks whether a string is a paindrome
* @n: Starting index
* @m: Ending index
* @s: String to be checked
* Return: 1 if string is a palindrome and 0 if its not
*/
int palindrome(int n, int m, char *s)
{
	if (s[n] != s[m])
		return (0);
	else if (n >= m || s[0] == '\0')
		return (1);
	return (palindrome(n + 1, m - 1, s));
}
/**
* is_palindrome - Checks whether a string is a palindrome
* @s: String to be checked
* Return: 1 if string is a palindrome and 0 if its not
*/
int is_palindrome(char *s)
{
	int m = _strlen_recursion(s) - 1;

	return (palindrome(0, m, s));
}

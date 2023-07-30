#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
 int len = _strlen_recursion(s);
 return check_pal(s, 0, len - 1);
}

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
 if (*s == '\0')
  return (0);
 return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Recursively checks if the string is a palindrome
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int check_pal(char *s, int start, int end)
{
 if (start >= end)
  return (1);

 if (s[start] != s[end])
  return (0);

 return check_pal(s, start + 1, end - 1);
}


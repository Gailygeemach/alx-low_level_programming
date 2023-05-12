#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character
 * @c: character to be checked
 * Return: If c is a letter, lowercase or uppercase return 1
 * Otherwise return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

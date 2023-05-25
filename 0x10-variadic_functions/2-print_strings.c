#include "variadic_functions.h"
/**
 * print_strings - A function that print strings
 * @separator: The separator
 * @n: The number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	char *ptr;
	va_list list;

	va_start(list, n);
	for (z = 0; z < n; z++)
	{
		ptr = va_arg(list, char *);
		if (!ptr)
			ptr = "nil";
		if (!separator)
			printf("%s", ptr);
		else if (separator && z == 0)
			printf("%s", ptr);
		else
			printf("%s%s", separator, ptr);
	}
	printf("\n");
	va_end(list);
}

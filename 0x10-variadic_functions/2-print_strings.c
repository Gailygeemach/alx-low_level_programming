#include "variadic_functions.h"
/**
 * print_strings - A function that  prints strings
 * @separator: The separator between strings
 * @n: The number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *ptr;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		ptr = va_arg(list, char *);
		if (!ptr)
			ptr = "(nil)";
		if (!separator)
			printf("%s", ptr);
		else if (separator && x == 0)
			printf("%s", ptr);
		else
			printf("%s%s", separator, ptr);
	}
	printf("\n");
	va_end(list);
}

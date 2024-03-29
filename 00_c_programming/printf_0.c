#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Entry point
 *
 * @format: A string containing all the desired characters
 *
 * Description: Receives the main string and all the necessary parameters to
 * print a formated string
 *
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count; /*counts the number of characters printed*/

	count = 0;

	while (*format != '\0') /*as long as the characters are not null byte*/
	{
		if (*format == '%') /*note when the program encounters a "%"*/
		{
			format++; /*Move past '%'*/
		}
		if (*format == 'c')
		{
			/*print a character*/
			int c = va_arg(args, int);

			putchar(c);
			count++;
		}

		else if (*format == 's')
		{
			/*print a string*/
			char *s = va_arg(args, char *);

			while (*s != '\0')
			{
				putchar(*s);
				s++;
				count++;
			}
		}

		else if (*format == '%')
		{
			/*Print '%'*/
			putchar('%');
			count++;
		}

		else
		{
			/*Print any other character*/
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}

int main()
{
	_printf("Hello, My name is %s\n", "Collins");
	return (0);
}

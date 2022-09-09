#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 always
 */
int main(void)
{
		char ch;
		for (ch = 'z'; ch >= 'a'; ch--)
		{
			putchar(ch);
		}
		putchar(10);
		return (0);
}

#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 after printing the function
 */
int main(void)
{
		char ch;
		for (ch = 'a'; ch <= 'z'; ch++)

		{
			if (ch != 'q' && ch != 'e')
			{
				putcha(ch);
			}
		}
		putchar(10);
		return (0);
}


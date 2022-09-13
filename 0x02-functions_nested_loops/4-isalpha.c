#include "main.h"

/**
 * _isalpha - alphabetical letters
 * @c: a character to be check
 *Returns: 0 always
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

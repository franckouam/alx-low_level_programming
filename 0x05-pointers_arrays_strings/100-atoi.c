#include <stdio.h>
#include <math.h>

/**
 * _isdigit - Checks for digit character.
 * @c: The charactere to check.
 * Return: 1 if c is a digit.
 *         0 otherwise
 */
int _isdigit(int c)
{
        int r = 0;

        if ((c > 47) && (c < 58))
                r = 1;
        return (r);
}

/**
 * char_to_int - Converts a char digit to its integer value.
 * @c: The ascii character.
 * Return: The integer value of c.
 */
int char_to_int(char c)
{
	int res;

	switch ((int)c)
	{
	case 48:
		res =  0;
		break;
	case 49:
		res =  1;
		break;
	case 50:
		res =  2;
		break;
	case 51:
		res =  3;
		break;
	case 52:
		res =  4;
		break;
	case 53:
		res =  5;
		break;
	case 54:
		res =  6;
		break;
	case 55:
		res =  7;
		break;
	case 56:
		res =  8;
		break;
	case 57:
		res =  9;
		break;
	default:
		res = 0;
	}
	return (res);
}






/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */
int order(char *s)
{
	int i = -1, o = 0, found_1st_int = 0;
	char tmp;

	do {
		tmp = s[++i];
		if (_isdigit(tmp))
		{
			o++;
			found_1st_int = 1;
		}
		else if (found_1st_int)
		{
			break;
		}
	} while (tmp != '\0');
	return (o);
}

/**
 * _strcpy - Copies a string to a buffer.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: dest wich will be a copy of src.
 */
char _atoi(char *s)
{
	int ci, i = -1, n = 0,sign = 1, res = 0, found_1st_int = 0;
	char tmp;

	n = order(s);
	do {
		tmp = s[++i];
		if (_isdigit(tmp))
		{
			ci = char_to_int(tmp);
			res += ci * pow(10, --n);
			found_1st_int = 1;
		}
		else if (found_1st_int)
		{
			break;
		}
		if (tmp == '-')
			sign = sign * -1;
	} while (tmp != '\0');
	return (sign * res);
}

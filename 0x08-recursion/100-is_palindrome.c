/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose the length will be returned.
 * Return: The length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _chunk_ispal - Tests if a part of a string is palindrome.
 * @s: The strin.
 * @start: The start
 * @end: The end
 * Return: 1 if the substring s[start..end] is palindrome.
 *	   0 otherwise.
 */
int _chunk_ispal(char *s, int start, int end)
{
	if (start == end || end - start == 1)
		return (s[start] == s[end]);
	if (s[start] != s[end])
		return (0);
	if (start < end + 1)
		return _chunk_ispal(s, start + 1, end - 1);
	return (1);
}
/**
 * is_palindrome - Tests if a string is a palindrome.
 * @s: The string to test.
 * Return: 1 if s is a palindrome. 0 otherwise.
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (_chunk_ispal(s, 0, n - 1));
}


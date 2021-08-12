#include "regex.h"
/**
 * regex_match - checks whether a given pattern matches a given string
 * @str: can be empty, and can contain any ASCII character
 * @pattern: can be empty, and can contain any ASCII character
 *
 * Return: return 1 if the pattern matches the string, or 0 if it doesn’t
 */
int regex_match(char const *str, char const *pattern)
{
	if (!*str)
		return (!*pattern || (pattern[1] == '*' && regex_match(str, pattern + 2)));
	if (pattern[1] == '*')
		return ((*pattern == '.' || *str == *pattern)
			 ? (regex_match(str + 1, pattern) || regex_match(str, pattern + 2))
			 : (regex_match(str, pattern + 2)));
	return ((*pattern == '.' || *pattern == *str) && regex_match(str + 1, pattern + 1));
}

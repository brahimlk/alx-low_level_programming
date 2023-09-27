#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * Separators of words: space, tabulation
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	char cap[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		while (cap[j] != '\0')
		{
			if (str[i] == cap[j] && (str[i + 1] >= 97 && str[i + 1] <= 122))
				str[i + 1] -= 32;
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}

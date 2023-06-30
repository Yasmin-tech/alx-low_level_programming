#include "main.h"

/**
 * cap_string - captilize all words
 *@s: string pointer
 *
 * Return : char *
 */

char *cap_string(char *str)
{
	char *s = str;
	int capitalize_next = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] ==  ','|| s[i] == ';' || s[i] == '.'||
				 s[i] == '!'|| s[i] == '?'||
				 s[i] == '"'||s[i] == '(' || 
				 s[i] == ')'|| s[i] == '{'||
				 s[i] == '}' || s[i] == ' ' ||
				 s[i] == '\t' || s[i] == '\n')
		{
			capitalize_next = 1;
		}
		else if ((capitalize_next))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}

			capitalize_next = 0;
		}

	}

	return (str);
}

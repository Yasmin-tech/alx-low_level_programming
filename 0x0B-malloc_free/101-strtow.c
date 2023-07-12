#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char **aloc_space_init_words(char **ptr, char *str, int w_counter);

/**
 * strtow - a function that splits a string into words
 *@str: a charcter pointer
 *
 * Return: a pointer to an array contains pointer to the words
 */

char **strtow(char *str)
{
	char **ptr = NULL;
	int i, flag, w_counter;

	if (str == NULL || !strlen(str))
	{
		return (NULL);
	}

	/* count number of words*/

	flag = 1; /* is set to 1 whenever a new word is found */
	w_counter = 0; /* for number of words, (when flag is 1) */
	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == ' ')
		{
			flag = 1;
		}
		else
		{
			if (flag)
				w_counter++;
			flag = 0;
		}

	}

	/*printf("there are %d words in the string\n", w_counter);*/

	/*
	 * allocating a space for (counter;see above) numbers of words
	 * and a space to hold a pointer for NULL, indecating the end of
	 * words array
	 */
	ptr = malloc((sizeof(char *)) * w_counter + sizeof(char *));

	if (ptr == NULL)
		return (NULL);

	return (aloc_space_init_words(ptr, str, w_counter));
}

/**
 * aloc_space_init_words - a function to allocate space of each word
 *	contained in the string str
 *@ptr: a pinter to an array of string
 *@str: the string used to initialized the words
 *@w_counter: the number of words in the array pointed to by ptr
 *
 * Return: ptr
 */

char **aloc_space_init_words(char **ptr, char *str, int w_counter)
{
	int i, j, k, flag, ch_counter;

	j = 0; /* used to iterate over the string "str" */
	for (i = 0; i < w_counter; i++) /* i is used to iterate over the words */
	{

		flag = 1; /* no words is counting */
		ch_counter = 0; /* counts number of characters in each word */
		for (; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
			{
				if (flag)
					continue;
				else
					break;
			}
			else
			{
				ch_counter++;
				flag = 0;
			}
		}

		/*
		 * allocating (counter) numbers of space for each word
		 * counter is the number of charcters, pluse one to
		 * terminate the string(word)
		 */
		ptr[i] = (char *)malloc((sizeof(char)) * ch_counter + 1);

		/* for loop to initialize the newly allocated space with words from str */

		for (k = 0; k < ch_counter; k++)
		{
			ptr[i][k] = str[j - ch_counter + k];/* i = word , k = character */
		}
		ptr[i][k] = '\0';  /* add null terminater for each word */

		/*printf("There are %d charcter in the %d word\n", ch_counter, i);*/

	}

	/* The last element of the returned array should be NULL */
	ptr[i] = NULL;

	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:27:59 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 17:21:27 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	count_word(const char *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*copy_one(const char *str, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			*result;

	i = 0;
	j = 0;
	while (str[i] && (str[i] != c))
		i++;
	result = malloc(sizeof(char) + (i + 1));
	if (!result)
		return (0);
	while (j < i)
	{
		result[j] = str[j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

static unsigned int	copy_words(const char *s, char c, char **result)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && (s[i] != c))
		{
			result[j] = copy_one(&s[i], c);
			if (!result[j])
			{
				while (j > 0)
					free (result[--j]);
				free (result);
				return (0);
			}
			j++;
			while (s[i] && (s[i] != c))
				i++;
		}
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	j;
	unsigned int	n;
	char			**result;

	if (!s)
		return (NULL);
	j = 0;
	n = count_word(s, c);
	result = malloc(sizeof(char *) * (n + 1));
	if (!result)
		return (NULL);
	j = copy_words(s, c, result);
	if (j == 0 && n > 0)
		return (NULL);
	result[j] = NULL;
	return (result);
}

/*int main()
{
	unsigned int	i = 0;
	char	string[] = "Bonjour, mais, ca, va, pas";
	char	c = '\0';
	char	**result = ft_split(string, c);
	printf("There are actually %d words.\n", count_word(string, c));
	while (result[i])
	{
		printf("The word %d is %s.\n", i, result[i]);
		i++;
	}
	//printf("The word is actually %s.\n", copy_one(string, c));
	//printf("The response is %d,\n", is_separator(set, c));
	return (0);
}*/

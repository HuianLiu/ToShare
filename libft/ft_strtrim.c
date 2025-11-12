/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:24:23 by hliu              #+#    #+#             */
/*   Updated: 2025/11/12 10:40:59 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_in_set(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*result;

	result = malloc(len * sizeof(char) + 1);
	if (!result)
		return (0);
	i = start;
	j = 0;
	while (i < (len + start))
	{
		result[j] = (char)s[i];
		i++;
		j++;
	}
	return (result);
}

static char	*return_empty(char *result)
{
	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;
	char			*result;
	char			*s;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	s = (char *)s1;
	while (is_in_set((char *)set, s[i]) == 1)
		i++;
	start = i;
	result = NULL;
	if (i == ft_strlen(s))
		return (return_empty(result));
	i = ft_strlen(s) - 1;
	while (is_in_set((char *)set, s[i]) == 1)
		i--;
	end = i;
	result = ft_substr(s, start, (end - start + 1));
	return (result);
}

/*int main()
{
	char	str[] = "   Hello, World";
	char	set[] = " ";
	printf("My result string is %s\n", ft_strtrim(str, set));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:03:06 by hliu              #+#    #+#             */
/*   Updated: 2025/11/04 14:19:15 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	len_s1;
	unsigned int	len_s2;
	char			*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	result = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < len_s1)
	{
		result[i] = (char)s1[i];
		i++;
	}
	while (i >= len_s1 && i < (len_s1 + len_s2))
	{
		result[i] = (char)s2[i - len_s1];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*#include <stdio.h>

int main()
{
	char s1[] = "Hello";
	char s2[] = "";
	printf("My result string is %s\n", ft_strjoin(s1, NULL));
	return (0);
}*/

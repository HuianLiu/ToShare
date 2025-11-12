/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 09:40:42 by hliu              #+#    #+#             */
/*   Updated: 2025/11/07 11:46:06 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

static unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*return_empty_string(char *result)
{
	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*result;

	if (!s)
		return (NULL);
	l = ft_strlen((char *)s);
	if (start >= l)
		return (return_empty_string(result));
	if (len > (l - start))
		len = l - start;
	result = malloc(len * sizeof(char) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = (char)s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
	char			s[] = "hola";
	unsigned int	start = 0;
	unsigned long	len = SIZE_MAX;
	printf("My substring is %s\n", ft_substr(s, start, len));
	return (0);
}*/

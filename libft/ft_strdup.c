/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:17:51 by hliu              #+#    #+#             */
/*   Updated: 2025/11/04 14:25:26 by hliu             ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	int		i;
	char	*result;

	result = malloc(ft_strlen((char *)s) * sizeof(char) + 1);
	if (!result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "Bonjourein!!!";
	printf("The official thingy is %s\n", strdup(str));
	printf("My thingy is %s\n", ft_strdup(str));
	return (0);
}*/

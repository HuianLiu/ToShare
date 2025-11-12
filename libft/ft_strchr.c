/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:46:21 by hliu              #+#    #+#             */
/*   Updated: 2025/10/30 09:44:43 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "Hello";
	int	c = '\0';
	printf("the official answer is %s\n", strchr(s, c));
	printf("my version is %s\n", ft_strchr(s, c));
	return (0);
}*/

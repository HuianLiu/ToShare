/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:15:15 by hliu              #+#    #+#             */
/*   Updated: 2025/11/07 10:24:13 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	if ((char)c == '\0')
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
    char s[] = "";
	int c = 'a';
    printf("the official answer is %s\n", strrchr(s, c));
    printf("my version is %s\n", ft_strrchr(s, c));
    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:44:06 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:33:54 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen((char *)src);
	if (size <= j)
		return (size + k);
	while (src[i] && (i + j) < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + k);
}

/*#include <bsd/string.h>

int main()
{
    char dest[] = "Hello ";
    char src[] = "World!";
    unsigned int size = 10;
    printf("official no. is %zu, text is %s\n", strlcat(dest, src, size), dest);
    printf("my result is %zu, text is %s\n", ft_strlcat(dest, src, size), dest);
    return (0);
}*/

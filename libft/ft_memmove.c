/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:56:10 by hliu              #+#    #+#             */
/*   Updated: 2025/11/05 17:31:56 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*result;
	unsigned char	*source;

	i = 0;
	result = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n)
	{
		result[i] = source[i];
		i++;
	}
	return (result);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*result;
	unsigned char	*source;

	result = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (n == 0 || result == source)
		return (dest);
	if (result < source)
		ft_memcpy(result, source, n);
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			result[i] = source[i];
		}
	}
	return (result);
}

/*#include <string.h>

int main()
{
    char s[] = "abcdefghijklmnop";
    unsigned int n = 10;
    printf("The official answer is %p\n", memmove(s+2, s, n));
    printf("My answer is %p\n", ft_memmove(s+2, s, n));
    return (0);
}*/

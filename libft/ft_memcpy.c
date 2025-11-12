/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:18:30 by hliu              #+#    #+#             */
/*   Updated: 2025/10/29 10:53:56 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
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

/*#include <memory.h>
#include <string.h>

int main()
{
    char str[] = "BonjourBonjour.";
	char dest[] = "";
	int n = 4;
    //ft_memcpy(dest, str, n);
	memcpy(dest, str, n);
    puts(dest);
    //printf("%s", *ft_memset(str, c, n));
    return (0);
}*/

/*int main()
{
	char d[] = "";
	char s[] = "BonjourBonjour.";
	int t = 9;
	ft_memcpy(d,s,t);
	puts(d);
	return (0);
}*/

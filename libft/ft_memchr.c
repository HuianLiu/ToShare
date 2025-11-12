/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:01:06 by hliu              #+#    #+#             */
/*   Updated: 2025/11/06 14:08:33 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>

int main()
{
//    char s[] = "BonjourJeVoudraisUneBaguetteSIlVousPlait.";
	unsigned char s[] = {0, 1, 2, 255, 254, 128, 127};
    int c = 255;
	int	n = 7;
    printf("%p\n", memchr(s, c, n));
	printf("%p\n",ft_memchr(s, c, n));
    return (0);
}*/

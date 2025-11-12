/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:46:55 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:33:18 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*result;

	i = 0;
	result = (unsigned char *)s;
	if (n == 0)
		return (result);
	while (i <= (n - 1))
	{
		result[i] = c;
		i++;
	}
	return (result);
}

/*#include <memory.h>

int main()
{
	char str[16] = "BonjourBonjour.";
	unsigned int n = 0;
	char c = 56;
	ft_memset(str, c, n);
	puts(str);
	//printf("%s", *ft_memset(str, c, n));
	return (0);
}*/

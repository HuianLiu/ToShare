/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:24:57 by hliu              #+#    #+#             */
/*   Updated: 2025/10/31 13:10:09 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)malloc((nmemb * size));
	if (!str)
		return (0);
	if (nmemb != 0 && size != 0 && nmemb != ((nmemb * size) / size))
		return (0);
	i = 0;
	while (i < (nmemb * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/*int main()
{
	unsigned int	a = 10;
	unsigned int	b = 0;
	printf("The official answer is %p\n", calloc(a, b));
	printf("My answer is %p\n", ft_calloc(a, b));
	return (0);
}*/

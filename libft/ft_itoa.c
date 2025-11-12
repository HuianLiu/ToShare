/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:26:10 by hliu              #+#    #+#             */
/*   Updated: 2025/11/05 10:35:45 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	int_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*result;

	nb = n;
	i = int_len(n) - 1;
	result = malloc(int_len(n) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	result[int_len(nb)] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		result [0] = '0';
	while (nb > 0)
	{
		result[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

/*int main()
{
	int	n = -518;
	printf("The length of the integer is %d.\n", int_len(n));
	printf("The string would then be %s.\n", ft_itoa(n));
	return (0);
}*/

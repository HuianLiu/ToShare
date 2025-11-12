/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:55:43 by hliu              #+#    #+#             */
/*   Updated: 2025/10/30 14:21:28 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (nptr[i] == '\0')
		return (0);
	while (nptr[i] == 32 || (nptr[i] > 7 && nptr[i] < 14))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *str = "+00000000000000000000000000123";
	printf("Official atoi is %d\n", atoi(str));
	printf("My atoi is %d\n", ft_atoi(str));
	return (0);
}*/

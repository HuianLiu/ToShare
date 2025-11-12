/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:26:26 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:31:01 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char	c = '5';
	printf("%d\n", ft_isdigit(c));
	printf("le vrai valeur est de %d", isdigit(c));
	return 0;
}*/

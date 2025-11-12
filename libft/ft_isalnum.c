/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:23:05 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:28:50 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= 48 && c <= 57))
		return (8);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char c = '.';
	printf("%d\n", ft_isalnum(c));
	printf("le vrai valeur est de %d", isalnum(c));
	return 0;
}*/

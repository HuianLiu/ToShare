/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:49:59 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:29:16 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char c = '.';
	printf("%d\n", ft_isalpha(c));
	printf("le vrai valeur est de %d", isalpha(c));
	return 0;
}*/

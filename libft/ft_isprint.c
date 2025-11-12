/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:30:52 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:31:15 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = 127;
    printf("%d\n", ft_isprint(c));
    printf("le vrai valeur est de %d", isprint(c));
    return 0;
}*/

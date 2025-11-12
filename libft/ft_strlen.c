/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:38:24 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:34:37 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char *c = "8465asdaoih(*^#";
    printf("%d\n", ft_strlen(c));
    printf("le vrai valeur est de %lu", strlen(c));
    return 0;
}*/

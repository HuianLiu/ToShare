/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:51:38 by hliu              #+#    #+#             */
/*   Updated: 2025/11/11 15:28:02 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*result;

	i = 0;
	result = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i <= n - 1)
	{
		result[i] = '\0';
		i++;
	}
}

/*#include <memory.h>
#include <strings.h>

int main()
{
	char str[16] = "BonjourBonjour.";
    unsigned int n = 9;
    ft_bzero(str, n);
    puts(str);
    //printf("%s", *ft_memset(str, c, n));
    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:36 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/22 20:40:55 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[11];
	char str2[11];
	int c = 'A';
	size_t n = 9;

	ft_memset(str1, c, n);
	memset(str2, c, n);

	printf("ft_memset: %s\n", str1);
	printf("memset: %s\n", str2);

	return (0);
}
*/
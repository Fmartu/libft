/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:35:47 by fmartusc          #+#    #+#             */
/*   Updated: 2024/01/12 16:23:01 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*p1 && *p2 && (*p1 == *p2) && (n > 0))
	{
		p1++;
		p2++;
		n--;
	}
	if (n > 0)
		return (*p1 - *p2);
	return (0);
}

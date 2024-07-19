/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:30:53 by fmartusc          #+#    #+#             */
/*   Updated: 2024/01/11 17:58:30 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memset(void *buf, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)buf)[i] = c;
		i++;
	}
	return (buf);
}

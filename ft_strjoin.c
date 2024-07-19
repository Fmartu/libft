/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:24:15 by fmartusc          #+#    #+#             */
/*   Updated: 2024/01/16 19:10:50 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;
	int		size1;
	int		size2;

	i = 0;
	j = 0;
	if (!s2 || !s1)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}

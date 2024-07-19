/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:45:01 by fmartusc          #+#    #+#             */
/*   Updated: 2024/01/16 20:22:05 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;

	s2 = 0;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (s1[end] && ft_strchr(set, s1[end]) && (end > start))
		end--;
	s2 = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!s2)
		return (NULL);
	if (s2)
		ft_strlcpy(s2, &s1[start], end - start + 2);
	return (s2);
}

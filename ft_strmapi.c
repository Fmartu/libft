/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:00:15 by fmartusc          #+#    #+#             */
/*   Updated: 2024/01/16 19:33:32 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	int		i;
	char	*ns;

	i = 0;
	if (!s || !f)
		return (ft_strdup(""));
	size = ft_strlen(s);
	ns = (char *)malloc(sizeof(char) * (size + 1));
	if (!ns)
		return (NULL);
	while (i < size)
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:36:14 by fmartusc          #+#    #+#             */
/*   Updated: 2024/07/17 15:36:14 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ret;

	if (lst)
	{
		ret = *lst;
		if (ret)
		{
			ret = ft_lstlast(*lst);
			ret->next = new;
		}
		else
			*lst = new;
	}
	return ;
}

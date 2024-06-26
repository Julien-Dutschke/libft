/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:03:42 by jdutschk          #+#    #+#             */
/*   Updated: 2022/05/25 17:36:01 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *toAdd)
{
	if (lst != NULL && toAdd != NULL)
	{
		if (*lst != NULL)
			toAdd->next = *lst;
		*lst = toAdd;
	}
}

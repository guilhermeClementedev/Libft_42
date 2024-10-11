/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:41:05 by guclemen          #+#    #+#             */
/*   Updated: 2024/10/11 14:41:06 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*tmp;

	count = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = lst->next;
		count++;
	}
	return (count);
}

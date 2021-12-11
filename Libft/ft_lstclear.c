/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:48:44 by junoh             #+#    #+#             */
/*   Updated: 2021/12/10 16:58:59 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	i;

	if (lst == NULL || del == NULL)
		return ;
	i = 0;
	while (lst[i]->next != NULL)
		ft_lstdelone(lst[i++], del);
	*lst = NULL;
	return ;
}

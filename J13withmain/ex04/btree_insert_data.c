/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 02:04:12 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/22 06:21:25 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (*root == 0)
		(*root) = btree_create_node(item);
	else if (cmpf((*root)->item, item) > 0)
	{
		if ((*root)->left)
			btree_insert_data(&(*root)->left, item, cmpf);
		else
			(*root)->left = btree_create_node(item);
	}
	else if (cmpf((*root)->item, item) <= 0)
	{
		if ((*root)->right)
			btree_insert_data(&(*root)->right, item, cmpf);
		else
			(*root)->right = btree_create_node(item);
	}
}

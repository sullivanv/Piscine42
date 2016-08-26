/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 06:24:19 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/22 23:57:17 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
						int (*cmpf)(void *, void *))
{
	void *test;

	if (root != 0)
	{
		if ((test = btree_search_item(root->left, data_ref, cmpf)))
			return (test);
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		if ((test = btree_search_item(root->right, data_ref, cmpf)))
			return (test);
	}
	return (0);
}

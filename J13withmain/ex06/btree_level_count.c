/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 00:09:14 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/23 01:29:08 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int i;
	int j;

	if (root)
	{
		i = btree_level_count(root->left) + 1;
		j = btree_level_count(root->right) + 1;
		if (i < j)
			return (j);
		else
			return (i);
	}
	else
		return (0);
}

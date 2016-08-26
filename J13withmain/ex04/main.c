/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 01:40:41 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/23 10:58:07 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

#include <stdio.h>
#include <stdlib.h>

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		applyf(root->item);
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
	}
}

t_btree *btree_create_node(void *item)
{
    t_btree *tree;

    tree = malloc(sizeof(t_btree));
    if (tree)
    {
		tree->item = item;
		tree->left = NULL;
		tree->right = NULL;
    }
    return (tree);
}

void    affdata(void *str)
{
    printf("%s\n", str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(void)
{
    t_btree *tree1;
    t_btree *tree2;
    t_btree *tree3;
    t_btree *tree4;
    t_btree *tree5;
    t_btree *tree6;
    t_btree *tree7;

    tree1 = btree_create_node("1");
    tree2 = btree_create_node("2");
    tree3 = btree_create_node("3");
    tree4 = btree_create_node("4");
    tree5 = btree_create_node("5");
    tree6 = btree_create_node("7");
    tree7 = btree_create_node("8");

    tree1->left = tree2;
    tree1->right = tree3;

    tree2->left = tree4;
    tree2->right = tree5;

    tree3->left = tree6;
    tree3->right = tree7;
	tree1 = NULL;
	btree_insert_data(&tree1, "5", &ft_strcmp);
	btree_insert_data(&tree1, "1", &ft_strcmp);
	btree_insert_data(&tree1, "8", &ft_strcmp);
	btree_insert_data(&tree1, "0", &ft_strcmp);
	btree_insert_data(&tree1, "7", &ft_strcmp);
	btree_insert_data(&tree1, "9", &ft_strcmp);
    btree_apply_prefix(tree1, &affdata);
    return (0);
}

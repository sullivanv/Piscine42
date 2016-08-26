/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 02:28:39 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 06:02:10 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "protos.h"

void	ft_remove_space_bis(int *change, char **str, char **newstr, int *i)
{
	int count;

	count = 0;
	if (*change == 0)
	{
		(*newstr)[0] = '(';
		count++;
	}
	*i = 0;
	while ((*str)[*i])
	{
		if ((*str)[*i] != ' ')
		{
			(*newstr)[count] = (*str)[*i];
			count++;
		}
		*i = *i + 1;
	}
	if (*change == 0)
	{
		(*newstr)[count] = ')';
		(*newstr)[count + 1] = '\0';
	}
	else
		(*newstr)[count] = '\0';
}

char	*ft_remove_space(char *newstr, char *str, int change)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			count++;
		if (change == 0 && str[i] == '-' && str[i - 1] != ' ')
			str[i] = 'm';
		i++;
	}
	free(newstr);
	newstr = (char*)malloc(sizeof(char) * count + 3);
	ft_remove_space_bis(&change, &str, &newstr, &i);
	return (newstr);
}

int		ft_find_op(char *str, int *first, int *last, int *ope)
{
	int i;

	i = 0;
	*first = 0;
	while (str[i])
	{
		if (str[i] == ')')
		{
			*last = i - 1;
			break ;
		}
		i++;
	}
	if (*last != 0)
	{
		while (str[i] != '(')
		{
			if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
				str[i] == '%' || str[i] == '/')
				*ope = i;
			i--;
		}
		*first = i + 1;
	}
	return (*last);
}

char	*ft_remove_par(int ope, char *newstr, int first, int last)
{
	if (ope == 0)
	{
		newstr[first - 1] = ' ';
		newstr[last + 1] = ' ';
	}
	return (newstr);
}

int		eval_expr(char *str)
{
	char	*newstr;
	int		first;
	int		last;
	int		ope;

	first = 0;
	last = 1;
	newstr = NULL;
	newstr = ft_remove_space(newstr, str, 0);
	while (last != 0)
	{
		ope = 0;
		last = 0;
		newstr = ft_remove_space(newstr, newstr, 1);
		if (ft_find_op(newstr, &first, &last, &ope) == 0)
			break ;
		newstr = ft_find_priority(newstr, first, last);
		if (ope == 0)
			newstr = ft_remove_par(ope, newstr, first, last);
		else if (newstr[first] == '-' && newstr[first - 1])
			newstr[first] = 'm';
		newstr = ft_removedoubleneg(newstr);
	}
	return (ft_atoi(newstr));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 21:25:37 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/16 07:37:29 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef	struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;

void					ft_putchar(char c);
struct s_stock_par		*ft_param_to_tab(int ac, char **av);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 14:04:14 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/14 19:15:34 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_main_algo(char **tab, int position, int *nb_sol, char ***tabcpy);
void	print_sudoku(char **tab);
char	**ft_init_tab(char **argv);
char	**tab_copy(char **tab);
void	tab_free(char **tab);

#endif

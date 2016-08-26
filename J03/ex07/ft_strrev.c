/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 07:57:45 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/04 08:40:13 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i <= j)
	{
		c = str[j];
		str[j] = c;
		str[j] = str[i];
		str[i] = c;
		i++;
		j--;
	}
	return (str);
}

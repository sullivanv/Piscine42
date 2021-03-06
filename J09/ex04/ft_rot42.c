/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 23:06:05 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/11 23:20:02 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'j') ||
			(str[i] >= 'A' && str[i] <= 'J'))
			str[i] = str[i] + 16;
		else if ((str[i] >= 'k' && str[i] <= 'z') ||
				(str[i] >= 'K' && str[i] <= 'Z'))
			str[i] = str[i] - 10;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 05:59:38 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/09 06:16:35 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	strmin(char *str, int *first, int *i)
{
	if (*first == 0)
	{
		*first = 1;
		if (str[*i] >= 'a' && str[*i] <= 'z')
			str[*i] = str[*i] - 32;
	}
	else if (str[*i] >= 'A' && str[*i] <= 'Z')
		str[*i] = str[*i] + 32;
	*i = *i + 1;
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int first;

	i = 0;
	first = 0;
	while (str[i] && first != 2)
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= '0' && str[i] <= '9'))
		{
			strmin(str, &first, &i);
		}
		if (str[i] == '\0')
			first = 2;
		first = 0;
		i++;
	}
	return (str);
}

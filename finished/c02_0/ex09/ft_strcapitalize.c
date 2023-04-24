/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:06:14 by anunes-c          #+#    #+#             */
/*   Updated: 2023/02/22 19:11:57 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	char	prvs;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		prvs = str[i - 1];
		if ((prvs >= 'a' && prvs <= 'z') || (prvs >= 'A' && prvs <= 'Z')
			|| (prvs >= '0' && prvs <= '9'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

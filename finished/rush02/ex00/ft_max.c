/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbriseno <dbriseno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:10:53 by dbriseno          #+#    #+#             */
/*   Updated: 2023/02/26 22:00:16 by dbriseno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(char *str)
{
	int						count;
	unsigned int			num;

	count = 0;
	num = 0;
	while (str[num] != '\0' && str[num] != '\n' && str[num] != '\\')
	{
		if ((str[num] > '9' || str[num] < '0') && str[num] != 92)
			return (0);
		num++;
	}
	num = 0;
	while (str[count] >= '0' && str[count] <= '9')
	{
		num *= 10;
		num = num + (str[count] - '0');
		count++;
	}
	if (str[count] != '\0' && str[count] != '\n')
		return (0);
	if (count == 10 && ((str[0] == '4' && num < 4000000000) || str[0] > '4'))
		return (0);
	if (count > 10)
		return (0);
	return (1);
}

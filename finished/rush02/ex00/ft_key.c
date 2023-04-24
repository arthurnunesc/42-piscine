/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scespede <scespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:23:07 by scespede          #+#    #+#             */
/*   Updated: 2023/02/26 10:52:50 by clopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_key(char *str)
{
	int						count;
	unsigned int			num;

	count = 0;
	num = 0;
	while (str[count] >= '0' && str[count] <= '9')
	{
		num *= 10;
		num = num + (str[count] - '0');
		count++;
	}
	return (num);
}

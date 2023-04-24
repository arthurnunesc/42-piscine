/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_val.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbekerma <jbekerma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:04:45 by jbekerma          #+#    #+#             */
/*   Updated: 2023/02/25 14:20:42 by jbekerma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_val(char *str)
{
	int	i;
	int	start;
	int	j;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] <= ' ')
		i++;
	start = i;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] <= ' ' && str[j] != '\0')
			j++;
		if (str[j] == '\0')
		{
			str[i + 1] = '\0';
			return (&str[start]);
		}
		i++;
	}
	return (&str[start]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:57:57 by anunes-c          #+#    #+#             */
/*   Updated: 2023/03/02 15:28:32 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(100, "0123456789");
	printf("\n");
	ft_putnbr_base(100, "01");
	printf("\n");
	ft_putnbr_base(31, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(100, "poneyvif");
	printf("\n");
	ft_putnbr_base(100, "01234567");
	printf("\n");
	ft_putnbr_base(100, "001234567");
	printf("\n");
	return (0);
}

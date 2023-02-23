/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalazar <ksalazar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:55:33 by ksalazar          #+#    #+#             */
/*   Updated: 2023/02/19 23:19:45 by ksalazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTRACKING_H
# define BACKTRACKING_H

# include "utils.h"
# include <stdbool.h>

void	backtracking(int map[][4], int input[16]);

void	backtracking_aux(bool mr[][4], bool mc[][4], int m[][4], int ir, int ic);
#endif

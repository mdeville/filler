/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:32:03 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/25 16:51:51 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

#include <unistd.h>

typedef struct	s_block
{
	int x;
	int y;
}				t_block;

int		get_dim(size_t *dimx, size_t *dimy);
void	del_board(int **board);
int		**init_board(size_t *dimx, size_t *dimy);
void	print_board(int fd, int **board, size_t dimx);
void	place_piece(int **board, size_t dimx, size_t dimy, int player);

#endif

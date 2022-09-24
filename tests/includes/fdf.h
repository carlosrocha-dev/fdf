/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:09:00 by caalbert          #+#    #+#             */
/*   Updated: 2022/09/24 16:19:06 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../mlx/mlx.h"
# include "../../libft/libft.h"

/******************************************************************************\
*    Window config                                                             *
\******************************************************************************/

# define WIN_W 1024
# define WIN_H 780
# define WIN_TITLE "FDF - Testing shapes | By caalbert@42sp.org.br"

/******************************************************************************\
*    Struct images config                                                      *
\******************************************************************************/

typedef struct render_s
{
	void	*pixel;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			render_t;

/******************************************************************************\
*    Events config                                                            *
\******************************************************************************/

# define KEY_ESC 53
# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_DOWN 125
# define KEY_UP 126
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_Q 12
# define KEY_E 14
# define KEY_P 35
# define KEY_1 18
# define KEY_2 19
# define KEY_NUM_4 86
# define KEY_NUM_6 88
# define KEY_NUM_8 91
# define KEY_NUM_2 84
# define SCROLL_UP 5
# define SCROLL_DOWN 4
# define MOUSE_BUTTON_RIGHT 2
# define MOUSE_BUTTON_LEFT 1
# define KEY_R 15
# define KEY_NUM_PLUS 69
# define KEY_NUM_MINUS 78
# define KEY_G 5
# define KEY_C 8
# define KEY_B 11
# define KEY_TAB 48
# define KEY_SHIFT 257
# define KEY_O 31

typedef struct	keys_s {
	void	*mlx;
	void	*win;
}				keys_t;

#endif
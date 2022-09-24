/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:49:18 by caalbert          #+#    #+#             */
/*   Updated: 2022/09/24 11:59:11 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

int	main(void)
{
	void	*mlx; //init lib
	void	*mlx_win; //init window
	render_t	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, WIN_W, WIN_H, WIN_TITLE); //Creating window screen
	img.pixel = mlx_new_image(mlx, WIN_W, WIN_H); // Creating image on screen
	img.pixel =mlx_get_data_addr(img.pixel, &img.bits_per_pixel, & img.line_length, &img.endian);
	
	mlx_loop(mlx);
	// mlx_destroy_window(mlx);
}
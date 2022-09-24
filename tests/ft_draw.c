/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:15:30 by caalbert          #+#    #+#             */
/*   Updated: 2022/09/24 16:18:22 by caalbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void	set_pixel(render_t *data, int x, int y, int color);
// int	close(int keycode, keys_t *vars);
int	deal_key(int key, void* param)
{
	ft_putchar('X');
	mlx_pixel_put(mlx, mlx_win, 200,200, 0XBA1234);
	return (0);
}

void	ft_draw_line(int start_x, int end_x, int color)
{
	void		*mlx;
	void		*mlx_win;
	render_t	render;
	int			end_y;
	int			start_y;

	mlx = mlx_init();
	//start_x = 50;
	start_y = WIN_H/2;
	end_x = (WIN_W-start_x);
	end_y = WIN_H-start_y;
		while (start_x <= end_x)
		{
			set_pixel(&render, start_x, start_y, color);
			// my_mlx_pixel_put(&render, start_y, start_x, color);
			start_x++;
		}
	mlx_loop(mlx);
}
int	main(void)
{
	void		*mlx; //init lib
	void		*mlx_win; //init window
	render_t	img;
	keys_t		vars;
	int			start_x;
	int			start_y;
	int			end_y;
	int			end_x;
	int			color;



	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, WIN_W, WIN_H, WIN_TITLE); //Creating window screen
	/*
	Creating image to put pixels
	*/
	img.pixel = mlx_new_image(mlx, WIN_W, WIN_H);
	img.addr = mlx_get_data_addr(
				img.pixel,
				&img.bits_per_pixel,
				&img.line_length,
				&img.endian
				);
	// ft_draw_line(5,(WIN_W-3),0X00FFFF);

	start_y = WIN_H/2;
	end_x = (WIN_W-start_x);
	end_y = WIN_H-start_y;
		// while (start_x <= end_x)
		// {
		// 	color = 0X00FFFF;
		// 	set_pixel(&img, start_y, start_x, color);
		// 	set_pixel(&img, start_x, start_y, color);
		// 	// my_mlx_pixel_put(&render, start_y, start_x, color);
		// 	start_x++;
		// 	// start_y++;
		// }
		while (start_x <= end_x)
		{
			color = 0XFFFF00;
			set_pixel(&img, start_x, start_y, color);
			// my_mlx_pixel_put(&render, start_y, start_x, color);
			(start_x++);
			// (start_y++);
		}
		// mlx_string_put(mlx, mlx_win, 50, 50, 0XFFFFFF, "Test input text");

	mlx_put_image_to_window(mlx, mlx_win, img.pixel, 30, 0);
	// Criar funcao para Destruir imagem, janela e display
	mlx_key_hook(mlx_win, deal_key, (void *)0 );
	mlx_loop(mlx);

}

// int	close(int keycode, keys_t *vars)
// {
// 	mlx_destroy_window(vars->mlx, vars->win);
// 	return (0);
// }


void	set_pixel(render_t *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

// mlx_hook(vars.win, ON_DESTROY, 0, close, &vars);
// Bresseham
// plotLine(x0, y0, x1, y1)
//     dx = abs(x1 - x0)
//     sx = x0 < x1 ? 1 : -1
//     dy = -abs(y1 - y0)
//     sy = y0 < y1 ? 1 : -1
//     error = dx + dy

//     while true
//         plot(x0, y0)
//         if x0 == x1 && y0 == y1 break
//         e2 = 2 * error
//         if e2 >= dy
//             if x0 == x1 break
//             error = error + dy
//             x0 = x0 + sx
//         end if
//         if e2 <= dx
//             if y0 == y1 break
//             error = error + dx
//             y0 = y0 + sy
//         end if
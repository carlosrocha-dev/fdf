#include "mlx_mac/mlx.h"
#include "headers/test.h"

void	set_pixel(render_t *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

static void	set_window(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, WIN_W, WIN_H, WIN_TITLE);
}

int	main(void)
{
	void		*mlx;
	void		*mlx_win;
	render_t	render;
	void			*window;
	int			init_x;
	int			init_y;
	int			end_x;
	int			end_y;

	window = set_window();
	render.pixel = mlx_new_image(mlx, WIN_W, WIN_H);
	render.addr = mlx_get_data_addr(
				render.pixel,
				&render.bits_per_pixel,
				&render.line_length,
				&render.endian
				);
	init_x = 50;
	init_y = WIN_H/2;
	end_x = (WIN_W - 50);
	end_y = WIN_H;
	while (init_x <= end_x)
	{
		set_pixel(&render, init_x, init_y, 0x0000FFFF);
		set_pixel(&render, init_x, init_y, 0x0000FFFF);
		init_x++;
	}

	mlx_put_image_to_window(mlx, window, render.pixel, 0, 0);
	mlx_loop(mlx);
}

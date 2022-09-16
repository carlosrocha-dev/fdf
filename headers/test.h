#ifndef IMAGE_H
# define IMAGE_H

/******************************************************************************\
*    Window config                                                             *
\******************************************************************************/

# define WIN_W 1024
# define WIN_H 780
# define WIN_TITLE "FDF - PIXEL STUIES | By caalbert@42sp.org.br"

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

#endif
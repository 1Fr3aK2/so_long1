/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:56:21 by rafael            #+#    #+#             */
/*   Updated: 2024/11/09 05:00:16 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#define ALTURA 500
#define LARGURA 800

/* int main(int argc, char *argv[])
{
    if (argc != 2)
        ft_putstr_fd("Ivalide number of arguments\n ./so_long map.ber", 2);
    check_name(argv[1]);
} */
/* static void my_pixel_put(t_data *data, int x, int y, int color) //funcao criada pelo user para colocar pixeis na janela
{
    char *dst;
    
    if (!data)
        return ;
    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel/8));
    *(unsigned int *)dst = color;
}
 */
/* int	main(void)
{
	void	*mlx;
	void	*mlx_win;
    t_data  imagem;

    
    mlx = mlx_init(); // iniciar uma conexao com api, iniciar minilibx 
    mlx_win = mlx_new_window(mlx, 500, 500, "fck off"); //criar uma nova janela
    for (int y = 0; y < ALTURA - 50; ++y)
    {
        for (int x = 0; y < LARGURA - 50; ++x)
        {
            mlx_pixel_put(mlx, mlx_win, x + 200, y + 200, RED);
        }
    }
	mlx_loop(mlx); // mantem o programa a correr 
} */

/* 	imagem.img = mlx_new_image(mlx, 600, 4801); //inicalizar a imagem
    imagem.addr = mlx_get_data_addr(imagem.img, &imagem.bits_per_pixel, 
                &imagem.line_length, &imagem.endian); //obter o adress da imagem
    my_pixel_put(&imagem, 100, 5, 0x00FF0000); // estrutra, linha, coluna, cor
    mlx_put_image_to_window(mlx, mlx_win, imagem.img, 0, 0);// colocar a imagem na janel */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:49:00 by bebektas          #+#    #+#             */
/*   Updated: 2024/01/07 15:48:22 by bebektas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../minilibx/mlx.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
		display_error("Error: Program requires two arguments.\n");
	format_checker(av);
	object_xpm_checker(&game);
	scene_xpm_checker(&game);
	scene_controller(av, &game);
	create_minilibx(&game);
	ft_key_comb(&game);
	mlx_loop(game.mlx.mlx_ptr);
}

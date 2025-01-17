/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:12:47 by raamorim          #+#    #+#             */
/*   Updated: 2024/12/10 15:12:48 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/so_long.h"

void	move_up(t_data *data, int key)
{
	if (!data)
		return ;
	if (key == XK_w || key == XK_Up)
	{
		if (data->map.map[data->player.y - 1][data->player.x] == EXIT
			&& data->map.collectibles != 0)
			return ;
		if (data->map.map[data->player.y - 1][data->player.x] != WALLS)
		{
			data->player.y--;
			data->moves++;
		}
	}
	if (data->map.map[data->player.y][data->player.x] == COLLECTIBLE)
	{
		data->map.map[data->player.y][data->player.x] = SPACE;
		data->map.collectibles--;
	}
	if (data->map.map[data->player.y][data->player.x] == EXIT
		&& data->map.collectibles == 0)
		exit_error(data, "GAME OVER!\n");
	if (data->map.map[data->player.y][data->player.x] == ENEMY)
		bomb_anim_exit(data);
}

void	move_down(t_data *data, int key)
{
	if (!data)
		return ;
	if (key == XK_s || key == XK_Down)
	{
		if (data->map.map[data->player.y + 1][data->player.x] == EXIT
			&& data->map.collectibles != 0)
			return ;
		if (data->map.map[data->player.y + 1][data->player.x] != WALLS)
		{
			data->player.y++;
			data->moves++;
		}
	}
	if (data->map.map[data->player.y][data->player.x] == COLLECTIBLE)
	{
		data->map.map[data->player.y][data->player.x] = SPACE;
		data->map.collectibles--;
	}
	if (data->map.map[data->player.y][data->player.x] == EXIT
		&& data->map.collectibles == 0)
		exit_error(data, "GAME OVER!\n");
	if (data->map.map[data->player.y][data->player.x] == ENEMY)
		bomb_anim_exit(data);
}

void	move_right(t_data *data, int key)
{
	if (!data)
		return ;
	if (key == XK_d || key == XK_Right)
	{
		if (data->map.map[data->player.y][data->player.x + 1] == EXIT
			&& data->map.collectibles != 0)
			return ;
		if (data->map.map[data->player.y][data->player.x + 1] != WALLS)
		{
			data->player.x++;
			data->moves++;
		}
	}
	if (data->map.map[data->player.y][data->player.x] == COLLECTIBLE)
	{
		data->map.map[data->player.y][data->player.x] = SPACE;
		data->map.collectibles--;
	}
	if (data->map.map[data->player.y][data->player.x] == EXIT
		&& data->map.collectibles == 0)
		exit_error(data, "GAME OVER!\n");
	if (data->map.map[data->player.y][data->player.x] == ENEMY)
		bomb_anim_exit(data);
}

void	move_left(t_data *data, int key)
{
	if (!data)
		return ;
	if (key == XK_a || key == XK_Left)
	{
		if (data->map.map[data->player.y][data->player.x - 1] == EXIT
			&& data->map.collectibles != 0)
			return ;
		if (data->map.map[data->player.y][data->player.x - 1] != WALLS)
		{
			data->player.x--;
			data->moves++;
		}
	}
	if (data->map.map[data->player.y][data->player.x] == COLLECTIBLE)
	{
		data->map.map[data->player.y][data->player.x] = SPACE;
		data->map.collectibles--;
	}
	if (data->map.map[data->player.y][data->player.x] == EXIT
		&& data->map.collectibles == 0)
		exit_error(data, "GAME OVER!\n");
	if (data->map.map[data->player.y][data->player.x] == ENEMY)
		bomb_anim_exit(data);
}

void	moves(t_data *data, int key)
{
	if (!data)
		return ;
	move_up(data, key);
	move_down(data, key);
	move_right(data, key);
	move_left(data, key);
}

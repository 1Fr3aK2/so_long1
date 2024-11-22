    #include "../../../includes/so_long.h"

    void move_player(int key, t_data *data)
    {
        if (!data)
            return ;
        if (key == XK_w || key == XK_Up)
        {
            if (data->map.map[data->player.y - 1][data->player.x] != WALLS)
            {
                data->player.y--;
                data->moves++;
            }
            else
                return ;
        }
        else if (key == XK_s || key == XK_Down)
        {
            if (data->map.map[data->player.y + 1][data->player.x] != WALLS)
            {
                data->player.y++;
                data->moves++;
            }
            else
                return ;
        }
        else if (key == XK_a || key == XK_Left)
        {
            if (data->map.map[data->player.y][data->player.x - 1] != WALLS)
            {
                data->player.x--;
                data->moves++;
            }
            else
                return ;
        }
        else if (key == XK_d || key == XK_Right)
        {
            if (data->map.map[data->player.y][data->player.x + 1] != WALLS)
            {
                data->player.x++;
                data->moves++;
            }
            else
                return ;
        }
       /*  if (key == XK_e)
        {
            if ((data->map.map[data->player.y][data->player.x] != EXIT) && data->map.collectibles == 0)
                exit_error(data, "leaving ...\n");
            return ;
        } */
        if (data->map.map[data->player.y][data->player.x] == WALLS)
            return ;
        if (data->map.map[data->player.y][data->player.x] == COLLECTIBLE)
        {
            data->map.map[data->player.y][data->player.x] = SPACE;
            data->map.collectibles--;
        }
        if (data->map.map[data->player.y][data->player.x] == EXIT && data->map.collectibles == 0)
            exit_error(data, "leaving\n");  
    }

    int press_X(t_data *data)
    {
        exit_error(data, "leaving ...\n");
        return (1);
    }

    int handle_key(int key, t_data *data)
    {
        if (!data)
            return (-1);
        if (key == XK_Escape)
            exit_error(data, "leaving ..\n");
        else
            move_player(key, data);
        return (1);
    }
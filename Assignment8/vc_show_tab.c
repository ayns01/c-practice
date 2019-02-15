/**
 * File              : vc_show_tab.c
 * Author            : Ayana, Paulo
 * Date              : Wed 13 Feb 2019
 */

void vc_show_tab(struct s_stock *stock)
{
    int i;

    i = 0;
    while (stock[i].str != 0)
    {
        putchar(stock[i].str);
        putchar('\n');
        putchar((stock[i].size_param) + 48);
        putchar('\n');
        int y;
        int j;

        y = 0;
        while (stock[i].words[y])
        {
            j = 0;
            while (stock[i].words[y][j])
                putchar(stock[i].words[y][j++]);
            putchar('\n');
            i++;
            y++;
        }
    }
}


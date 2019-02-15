/**
 * File              : vc_param_tab.c
 * Author            : Ayana, Paulo
 * Date              : Wed 13 Feb 2019
 */

#include <stdio.h>
#include <stdlib.h>
#include "vc_strlen.c"
#include "vc_stock.h"
#include "vc_split_whitespaces.c"
#include "vc_strdup.c"

struct s_stock *vc_param_to_tab(int ac, char **av) {
    int i;
    t_stock *table;

    table = (t_stock *) malloc(sizeof(t_stock) * (ac + 1));
    if (!table)
        return (NULL);
    i = -1;
    while (++i < ac) {
        table[i].size_param = vc_strlen(av[i]);
        table[i].str = av[i];
        table[i].copy = vc_strdup(av[i]);
        table[i].words = vc_split_whitespaces(av[i]);
    }
    table[ac].str = 0;
    return (table);
}

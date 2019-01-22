#include <stdio.h>
#include <string.h>
#include "player2.h"
#include "grelhaP.h"

NODE node = {1,0};
/**
 * função que desenha a grelha
 * */
int grelha()
{
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=0%d    +    #=0%d    +    #=0%d    +    #=0%d    +\n", node.coordinates, node.coordinates+1, node.coordinates+2, node.coordinates+3);
        printf("+            +            +            +            +\n");
        printf("+    N=      +    N=      +    N=      +    N=      +\n");
        printf("+    W=      +    W=      +    W=      +    W=      +\n");
        printf("+    E=      +    E=      +    E=      +    E=      +\n");
        printf("+    S=      +    S=      +    S=      +    S=      +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=0%d    +    #=0%d    +    #=0%d    +    #=0%d    +\n", node.coordinates+4, node.coordinates+5, node.coordinates+6, node.coordinates+7);
        printf("+            +            +            +            +\n");
        printf("+    N=      +    N=      +    N=      +    N=      +\n");
        printf("+    W=      +    W=      +    W=      +    W=      +\n");
        printf("+    E=      +    E=      +    E=      +    E=      +\n");
        printf("+    S=      +    S=      +    S=      +    S=      +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=0%d    +    #=%d    +    #=%d    +    #=%d    +\n", node.coordinates+8, node.coordinates+9, node.coordinates+10, node.coordinates+11);
        printf("+            +            +            +            +\n");
        printf("+    N=      +    N=      +    N=      +    N=      +\n");
        printf("+    W=      +    W=      +    W=      +    W=      +\n");
        printf("+    E=      +    E=      +    E=      +    E=      +\n");
        printf("+    S=      +    S=      +    S=      +    S=      +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=%d    +    #=%d    +    #=%d    +    #=%d    +\n", node.coordinates+12, node.coordinates+13, node.coordinates+14, node.coordinates+15);
        printf("+            +            +            +            +\n");
        printf("+    N=      +    N=      +    N=      +    N=      +\n");
        printf("+    W=      +    W=      +    W=      +    W=      +\n");
        printf("+    E=      +    E=      +    E=      +    E=      +\n");
        printf("+    S=      +    S=      +    S=      +    S=      +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
}


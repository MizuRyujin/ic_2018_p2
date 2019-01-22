#include <stdio.h>
#include <string.h>
#include "player2.h"
#include "grelhaP.h"

NODE node = {1,0};
/**
 * função que desenha a grelha
 * e arrays de dados
 * */

int news[16][4] = {{0, 0, 11, 4}, {0, 11, 12, 6}, {0, 12, 9, 5}, {0, 9, 0, 10}, {4, 0, 0, 3}, {6, 0, 10, 3}, {5, 10, 0, 11}, {10, 0, 0, 4}, {3, 0, 0, 8}, {3, 0, 9, 10}, {11, 9, 0, 10}, {4, 0, 0, 3}, {8, 0, 5, 0}, {10, 5, 2, 0}, {10, 2, 6, 0}, {3, 6, 0, 0}};

int grelha()
{
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=0%d    +    #=0%d    +    #=0%d    +    #=0%d    +\n", node.coordinates, node.coordinates+1, node.coordinates+2, node.coordinates+3);
        printf("+            +            +            +            +\n");
        printf("+    N=D     +    N=D     +    N=D     +    N=D     +\n");
        printf("+    W=D     +    W=L%d   +    W=W%d   +    W=G%d    +\n", news[1][1], news[2][1], news[3][1]);
        printf("+    E=L%d   +    E=W%d   +    E=G%d    +    E=D     +\n", news[0][2], news[1][2], news[2][2]);
        printf("+    S=B%d    +    S=I%d    +    S=B%d    +    S=W%d   +\n", news[0][3], news[1][3], news[2][3], news[3][3]);
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=0%d    +    #=0%d    +    #=0%d    +    #=0%d    +\n", node.coordinates+4, node.coordinates+5, node.coordinates+6, node.coordinates+7);
        printf("+            +            +            +            +\n");
        printf("+    N=B%d    +    N=I%d    +    N=B%d    +    N=W%d   +\n", news[4][0], news[5][0], news[6][0], news[7][0]);
        printf("+    W=D     +    W=D     +    W=W%d   +    W=D     +\n", news[6][1]);
        printf("+    E=D     +    E=W%d   +    E=D     +    E=D     +\n", news[5][2]);
        printf("+    S=G%d    +    S=L%d    +    S=G%d   +    S=L%d    +\n", news[4][3], news[5][3], news[6][3], news[7][3]);
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=0%d    +    #=%d    +    #=%d    +    #=%d    +\n", node.coordinates+8, node.coordinates+9, node.coordinates+10, node.coordinates+11);
        printf("+            +            +            +            +\n");
        printf("+    N=G%d    +    N=L%d    +    N=G%d   +    N=L%d    +\n", news[8][0], news[9][0], news[10][0], news[11][0]);
        printf("+    W=D     +    W=D     +    W=W%d    +    W=D     +\n", news[10][1]);
        printf("+    E=D     +    E=W%d    +    E=D     +    E=D     +\n", news[9][2]);
        printf("+    S=B%d    +    S=W%d    +    S=W%d   +    S=I%d   +\n", news[8][3], news[9][3], news[10][3], news[11][3]);
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
        printf("+            +            +            +            +\n");
        printf("+    #=%d    +    #=%d    +    #=%d    +    #=%d    +\n", node.coordinates+12, node.coordinates+13, node.coordinates+14, node.coordinates+15);
        printf("+            +            +            +            +\n");
        printf("+    N=B%d    +    N=W%d   +    N=W%d   +    N=I%d    +\n", news[12][0], news[13][0], news[14][0], news[15][0]);
        printf("+    W=D     +    W=I%d    +    W=G%d    +    W=L%d    +\n", news[13][1], news[14][1], news[15][1]);
        printf("+    E=I%d    +    E=G%d    +    E=L%d    +    E=D     +\n", news[12][2], news[13][2], news[14][2]);
        printf("+    S=D     +    S=D     +    S=D     +    S=D     +\n");
        printf("+            +            +            +            +\n");
        printf("+------------+------------+------------+------------+\n");
}


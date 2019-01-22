#include <string.h>
#include <stdio.h>
#include "Mapa.h"
#include "abrirINI.h"
#include <stdlib.h>

NODE node = {0,0,0,{NULL}};

/**
 * definir estrutura do mapa e coordenadas do mesmo
 * */
MAPA *create_mapa(unsigned int xdim, unsigned int ydim){
    MAPA *mp = NULL;
    mp = malloc(sizeof(MAPA));
    mp->map = calloc(xdim * ydim, sizeof(NODE));
    mp->xdim = xdim;
    mp->ydim = ydim;
    return mp;
}

/**
* funções de destruição do mapa
* */
void destroy_mapa(MAPA *mp){
	for(unsigned int i = 0; i < mp->xdim;i++)
	{
		free(mp->grid[i]);
	}
	free(mp->grid);
    free(mp->map);
    free(mp);
}

void destroy_mapa_full(MAPA *mp, void(*item_destroy)(NODE *node))
{
    for(unsigned int i = 0; i < mp -> xdim * mp -> ydim; ++i)
    {
        if (mp -> map[i] !=NULL){
            item_destroy(mp ->map[i]);
        }
    }
    destroy_mapa(mp);
}

/**
* funções da criação do mapa
* */

/*void mapa_put(MAPA *mp, unsigned int x, unsigned int y, NODE *node)
{
    mp -> map [y * mp -> xdim + x] = item;
}*/

NODE*mapa_get(MAPA*mp, unsigned int x, unsigned int y)
{
    return mp -> map [y * mp -> xdim + x];
}

/**
* funções de criação dos grafismos
**/

NODE createNew(MAPA *mp)
{
        mp = mp;
        return stdout;
}

void updateMapa(NODE node, MAPA *mp)
{
	for(unsigned int i = 0; i < mp->ydim; i++)
        {
                for(unsigned int j = 0; j < mp->xdim; j++)
                {
                        printf("+------------|");
                        /*printf("+            |");
                        printf("+     #=%d   |", node.coordinates);
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        printf("+            |");
                        node.coordinates++;*/
                }
                printf("\n");
                for(unsigned int j = 0; j < mp->xdim; j++)
                {
                        printf("+            +");
                        printf("+     #=%d   +", node.coordinates);
                        node.coordinates++;
                }
                fprintf((FILE *) node, "\n");
        }
        fprintf((FILE *) node, "\n");
}

void destroyMapa(NODE node)
{
        node = node;
}


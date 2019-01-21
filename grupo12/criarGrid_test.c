#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "criarGrid.h"

NODE node = {0, North, 0};

GRELHA createNew(MAPA *mp)
{
	mp = mp;
	mp->grid = (char**)malloc(sizeof(char*) * mp->ydim);
	for(unsigned int i = 0; i < mp->xdim; i++)
	{
		mp->grid[i] = (char*)malloc(sizeof(char) * mp->xdim);
	}
	return stdout;
}

void updateMapa(GRELHA grlh, MAPA *mp)
{
/*	sprintf((char*)grid, "+--------------+\n");
	sprintf((char*)grid, "+              +\n");
	sprintf((char*)grid, "+     #=%d     +\n", node.coordinates);
	sprintf((char*)grid, "+              +\n");
	sprintf((char*)grid, "+     N=       +\n");
	sprintf((char*)grid, "+     E=       +\n");
	sprintf(grid, "+     W=       +\n");
	sprintf(grid, "+     S=       +\n");
	sprintf(grid, "+              +\n");
	sprintf(grid, "+     V=       +\n");
	sprintf(grid, "+    C=        +\n");
	sprintf(grid, "+              +\n");
	sprintf(grid, "+              +\n");
	node.coordinates++; */
}


void destroyMapa(GRELHA grlh)
{
	grlh = grlh;
}


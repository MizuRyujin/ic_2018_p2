#include <stdio.h>
#include "criarGrid.h"

NODE node = {0, North, 0};

GRELHA createNew(MAPA *mp)
{
	mp = mp;
	return stdout;
}

void updateMapa(GRELHA grlh, MAPA *mp)
{
	for (unsigned int i = 0; i < mp->ydim; i++)
	{
		for (unsigned int j = 0; j < mp->xdim; j++)
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
		for(int j = 0; j < mp->xdim; j++)
		{
			printf("+            +");
			printf("+     #=%d   +", node.coordinates);
			node.coordinates++;
		}
		fprintf((FILE *) grlh, "\n");
	}
	fprintf((FILE *) grlh, "\n");
}

void destroyMapa(GRELHA grlh)
{
	grlh = grlh;
}

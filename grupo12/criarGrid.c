#include <stdio.h>
#include "criarGrid.h"



GRELHA createNew(MAPA *mp)
{
	mp = mp;
	return stdout;
}

void updateMapa(GRELHA grlh, MAPA *mp)
{
	//int nodes= 16;
	int coord = 1;
	for (unsigned int i = 0; i < mp->ydim; i++)
	{
		for (unsigned int j = 0; j < mp->xdim; j++)
		{
			printf("+------------+\n");
			printf("+            +\n");
			printf("+     #=%d   +\n", coord);
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			printf("+            +\n");
			coord++;
		}
		fprintf((FILE *) grlh, "\n");
	}
	fprintf((FILE *) grlh, "\n");
}


void destroyMapa(GRELHA grlh)
{
	grlh = grlh;
}


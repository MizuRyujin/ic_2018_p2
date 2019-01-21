#include <stdio.h>
#include "Mapa.h"
#include "criarGrid.h"


int main()
{

	MAPA *mp = NULL;
	GRELHA grlh_mp = NULL;

	int xdim = 4;
	int ydim = 4;

	mp = create_mapa(xdim, ydim);

	grlh_mp = createNew(mp);

	updateMapa(grlh_mp, mp);

	destroyMapa(mp);

	return 0;
}

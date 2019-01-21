#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#include "abrirINI.h"
#include "criarGrid.h"
#include "Mapa.h"
#include "player1.h"

int main(int argc, char **argv)   //Primeiro pede o ficheiro INI para as configs do jogo
{
	unsigned int xdim = 0, ydim = 0;

	MAPA *mp = NULL;
	GRELHA mp_grlh = NULL;

	FILE * f;

	if(argc < 2)
	{
		fprintf(stderr, "ERRO: Insira o nome do ficheiro ini\n");
		exit(1);
	}

	f = abreINI(argv[1], "r");

	srand(time(NULL));

	mp = create_mapa(xdim, ydim);
	mp_grlh = createNew(mp);

	updateMapa(mp_grlh, mp);

	printf("Pressione ENTER para sair...\n");
	getchar();

	destroyMapa(mp_grlh);
	//destroy_mapa_full(mp, (void (*)(ITEM *)),


	return 0;
}

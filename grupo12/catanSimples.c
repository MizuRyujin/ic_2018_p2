#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#include "abrirINI.h"
#include "borboleta.h"
#include "Mapa.h"
#include "player.h"

int main(int argc, char **argv)   //Primeiro pede o ficheiro INI para as configs do jogo
{
	FILE * f;

	if(argc < 2)
	{
		fprintf(stderr, "ERRO: Insira o nome do ficheiro ini\n");
		exit(1);
	}

	f = abreINI(argv[1], "r");
	return 0;
}

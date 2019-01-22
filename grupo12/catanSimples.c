#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#include "abrirINI.h"
#include "Mapa.h"
#include "player1.h"

/**
 * função main do programa, começa por pedir coordenadas do mapa, depois criando-o
 * */
int main(int argc, char **argv)   //Primeiro pede o ficheiro INI para as configs do jogo
{
	unsigned int xdim = 0, ydim = 0;

	MAPA *mp = NULL;
	NODE mp_grlh = {NULL};

	FILE * f;

	if(argc < 2)
	{
		fprintf(stderr, "ERRO: Insira o nome do ficheiro ini\n");
		exit(1);
	}

	f = abreINI(argv[1], "r");

	 //Le as linhas
	void **data = ReadLines(f);
	//retira as linhas de data
	char **lines = (char**)data[0];
	//Retira o numero de linhas de data
	int lineCount = (int)data[1];
	//percorre o array de linhas imprime e liberta da memória as linhas
	for(int i = 0; i <= lineCount; i++)
	{
		if ( lines[i][0] != ';')
		{
			char * s = strtok(lines[i], "=");
			while(s != NULL)
			{
				if (strcmp(s, "xdim") == 0)
				{
					printf("xdim = ");
					s = strtok(NULL, "=") ;
					xdim = ParseToInt(s);
					printf("xdim = ");
                                }

				else
				{
					s = strtok(NULL, "=");
				}

                                if (strcmp(s, "xdim") == 0)
                                {
                                        printf("xdim = ");
                                        s = strtok(NULL, "=") ;
                                        xdim = ParseToInt(s);
                                        printf("xdim = ");
				}

                                else
                                {
                                        s = strtok(NULL, "=");
                                }
			}
		}
	free(lines[i]);
	//Liberta da memoria as linhas
	free(lines);
	//Liberta da memória data
	free(data);
	//fechar ficheiro
	fclose(f);
	}

	srand(time(NULL));

	mp = create_mapa(xdim, ydim);
	mp_grlh = createNew(mp);

	updateMapa(mp_grlh, mp);

	destroyMapa(mp_grlh);
	//destroy_mapa_full(mp, (void (*)(ITEM *)),

        printf("Pressione ENTER para sair...\n");
        getchar();

	return 0;
}

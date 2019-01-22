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

        NODE mp_grlh = {0, 0, 0, {NULL}};

	MAPA *mp = NULL;

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
	int lineCount = (int*)data[1];
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
					s = strtok(NULL, "=");
					xdim = ParseToInt(s);
					printf("xdim = %d", xdim);
                                }

				else
				{
					s = strtok(NULL, "=");
				}

//                                if (strcmp(s, "ydim") == 0)
//                                {
//                                        printf("ydim = ");
//                                        s = strtok(NULL, "=");
//                                        xdim = ParseToInt(s);
//                                        printf("ydim = %d", ydim);
//				  }
//
//                                else
//                                {
//                                        s = strtok(NULL, "=");
//                                }
			}
		}
		free(lines[i]);
	}
	//Liberta da memoria as linhas
	free(lines);
	//Liberta da memória data
	free(data);
	//fechar ficheiro
	fclose(f);

	srand(time(NULL));

	mp = create_mapa(xdim, ydim);
	mp_grlh = createNew(mp);

	updateMapa(mp_grlh, mp);


	PLAYER a = {"",{0,0,0,0,0},{0,0},0};

	PLAYER b = {"",{0,0,0,0,0},{0,0},0};

        printf("Player 1 please state your name:\n");
        gets(a.name);

        printf("Player 2 please state your name:\n");
        gets(b.name);

	while(a.victory_points <= 5 && b.victory_points <= 5)
        {
		int * nRead = mp_grlh.value;
		int Turn = 1;
        	int dice1, dice2;
        	turn(a, b, Turn);
        	Turn++;
        	int roll = dice(dice1, dice2);
        	switch(*nRead)
        	{
			case 'w': a.resources.wool++; Mostrar(a); break;
        	        case 'g': a.resources.grain++; Mostrar(a); break;
        	        case 'l': a.resources.lumber++; Mostrar(a); break;
        	        case 'b': a.resources.brick++; Mostrar(a); break;
        	        case 'i': a.resources.iron++; Mostrar(a); break;
        	        case 'd': printf("Só há deserto nessa direção\n"); break;
        	        default : printf("\n"); break;
        	}

	}

	destroyMapa(mp_grlh);
	//destroy_map_full(mp, void (*)(NODE * node));

        printf("Pressione ENTER para sair...\n");
        getchar();

	return 0;
}

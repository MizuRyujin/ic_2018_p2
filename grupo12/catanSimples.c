#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#include "abrirINI.h"
#include "criarGrid.h"
#include "Mapa.h"
//#include "player1.h"

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
	
	 //Le as linhas
	void **data = ReadLines(f);
 //retira as linhas de data
 char **lines = (char**)data[0];
 //Retira o numero de linhas de data
 int lineCount = (int)data[1];
 //percorre o array de linhas imprime e liberta da memória as linhas
 for(int i = 0; i <= lineCount; i++)
 {
  	if ( lines[i][1] != ';')
	{
		char * s = strtok(lines[i], "=");
		while(s != NULL)
		{
			char *f = (char*)malloc(sizeof(char) * strlen(s));
			for(int k = 1; k < strlen(s); k++)
				f[k - 1] = s[k];
			f[strlen(s) - 1] = '\0';
			if (strcmp(f, "xdim") == 0)
			{
				s = strtok(NULL, "=") ;
				xdim = ParseToInt(s);
				printf("xdim = %d", xdim);
			}
			if (strcmp(f, "ydim") == 0)
			{
				s = strtok(NULL, "=") ;
				ydim = ParseToInt(s);
				printf("ydim = %d", ydim);
			}
			else
				s = strtok(NULL, "=");
			free(f);
		}

	}
  free(lines[i]);
 }
 //Liberta da memoria as linhas
 free(lines);
 //Liberta da memória data
 free(data);
 //fechar ficeiro
 fclose(f);

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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#include "abrirINI.h"

/**
 * chama função para abrir o ficheiro de config.
 * e erro correspondente
 * */
FILE * abreINI(char * nome, char * modo)
{
	FILE * f;
	printf("A abrir ficheiro %s\n", nome);
	f = fopen(nome, modo);

	if(f == NULL)
	{
		fprintf(stderr,"*** Não foi possível abrir o ficheiro %s ***\n", nome);
		exit(1);
	}
	return f;
}

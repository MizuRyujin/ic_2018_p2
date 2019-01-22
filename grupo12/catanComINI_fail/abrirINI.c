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

void **ReadLines(FILE *file)
{
	char **lineBuffer = (char**)malloc(sizeof(char**));
	lineBuffer[0] = (char*)malloc(sizeof(char));
	char ch = getc(file);
	int count = 0;
	int lineCount = 0;
	while ((ch != EOF))
	{
		lineBuffer[lineCount] = (char*)realloc((char*)lineBuffer[lineCount], sizeof(char) * ((int)strlen(lineBuffer[lineCount]) + 1));
		((char*)lineBuffer[lineCount])[count] = ch;
		count++;
		ch = getc(file);
		if ((ch == '\n'))
		{
			lineBuffer[lineCount] = (char*)realloc((char*)lineBuffer[lineCount], sizeof(char) * ((int)strlen(lineBuffer[lineCount]) + 1));
			((char*)lineBuffer[lineCount])[count] = '\0';
			count = 0;
			lineCount++;
			lineBuffer = (char**)realloc((char**)lineBuffer, sizeof(char**) * (lineCount + 1));
			lineBuffer[lineCount] = (char*)malloc(sizeof(char));
		}
		else if (ch == EOF)
		{
			lineBuffer[lineCount] = (char*)realloc((char*)lineBuffer[lineCount], sizeof(char) * ((int)strlen(lineBuffer[lineCount]) + 1));
			((char*)lineBuffer[lineCount])[count] = '\0';
		}
	}
	void **a = (void**)malloc(sizeof(void**) * 2);
	a[0] = (void*)lineBuffer;
	a[1] = (void*)lineCount;
	return a;
}

int ParseToInt(char *text)
{
	return (int)strtol(text, NULL, 10);
}

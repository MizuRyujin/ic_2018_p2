#ifndef __ABRIRINI_H__
#define __ABRIRINI_H__

#define MAX 256

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * define a função que o ficheiro de configuração
**/
FILE * abreINI(char *, char *);

void **ReadLines(FILE *file);

int ParseToInt(char *text);

#endif

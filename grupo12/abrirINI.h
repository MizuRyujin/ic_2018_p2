#ifndef __ABRIRINI_H__
#define __ABRIRINI_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

FILE * abreINI(char *, char *);

void **ReadLines(FILE *file);

int ParseToInt(char *text);

#endif

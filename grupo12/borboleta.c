#include <stdio.h>
#include "Mapa.h"
#include "player.h"
//#include "borboleta.h"

#define MAX 125

char map [MAX][MAX];
int north = 1;
int south = 1;
int east = 1;
int west = 1;
char village = 1;
char city = 1;
char player = 1;

int main()
{
  for (int i = 0; i < ydim; i++);
  { 
    for ( int j = 0; j < xdim);
    printf("+------");
    }
    printf("+");
    for(int j = 0; j< xdim; j++);
    {
    printf(" # %d", j++ * ydim);
    }
return 0;
}
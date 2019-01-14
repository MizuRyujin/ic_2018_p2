#include <stdio.h>
#include "Mapa.h"
#include "player.h"
#include "borboleta.h"



int main()
{
  MAPA*mp = create_mapa(4,4);

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
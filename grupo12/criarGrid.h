#ifndef __CRIARGRID_H__
#define __CRIARGRID_H__

#include <stdio.h>
#include "Mapa.h"

typedef void *GRELHA;

GRELHA createNew(MAPA *mp);
void updateMapa(GRELHA grlh, MAPA *mp);
void destroyMapa(GRELHA grlh);

#endif

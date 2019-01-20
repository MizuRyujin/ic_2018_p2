#include <string.h>
#include <stdio.h>
#include "Mapa.h"
#include "abrirINI.h"
#include <stdlib.h>

MAPA *create_mapa(unsigned int xdim, unsigned int ydim){
    MAPA *mp = NULL;
    mp = malloc(sizeof(MAPA));
    mp->map = calloc(xdim * ydim, sizeof(ITEM));
    mp->xdim = xdim;
    mp->ydim = ydim;
    return mp;
}

void destroy_mapa(MAPA *mp){
    free(mp->map);
    free(mp);
}

void destroy_mapa_full(MAPA *mp, void(*item_destroy)(ITEM *item)){
    for(unsigned int i = 0; i < mp -> xdim * mp -> ydim; ++i){
        if (mp -> map[i] !=NULL){
            item_destroy(mp ->map[i]);
        }
    }
    destroy_mapa(mp);
}

void mapa_put(MAPA *mp, unsigned int x, unsigned int y, ITEM *item){
    mp -> map [y * mp -> xdim + x] = item;
}

ITEM*mapa_get(MAPA*mp, unsigned int x, unsigned int y) {
    return mp -> map [y * mp -> xdim + x];
}


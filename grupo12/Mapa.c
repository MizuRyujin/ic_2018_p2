#include "Mapa.h"
#include <stdlib.h>

MAPA*create_mapa(unsigned int xdim, unsigned int ydim, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste){
    MAPA*mp = NULL;
    mp = malloc(sizeof(MAPA));
    mp ->map = calloc(xdim*ydim, sizeof(ITEM));
    mp -> xdim = xdim;
    mp -> ydim = ydim;
    mp -> norte = norte;
    mp -> sul = sul;
    mp -> este = este;
    mp -> oeste = oeste;
    return mp;
}

void destroy_mapa(MAPA*mp){
    free(mp ->map);
    free(mp);
}

void destroy_mapa_full(MAPA*mp, void(*item_destroy)(ITEM*item)){
    for(unsigned int i = 0; i *mp -> xdim *mp -> ydim, mp -> norte, mp -> sul, mp -> este, mp -> oeste; ++i){
        if (mp -> map[i] !=NULL){
            item_destroy(mp ->map[i]);
        }
    }
    destroy_mapa(mp);
}

void mapa_put(MAPA*mp, unsigned int x, unsigned int y, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste, ITEM*item){
    mp -> map [y*mp -> xdim + x] = item;
}

ITEM*mapa_get(MAPA*mp, unsigned int x, unsigned int y, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste) {
    return mp -> map [y* mp -> xdim + x];
}


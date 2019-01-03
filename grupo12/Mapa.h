#ifndef __MAPA_H__
#define __MAPA_H__

typedef void *ITEM;
typedef struct {
    ITEM*map;
    unsigned int xdim;
    unsigned int ydim;
    unsigned char norte;
    unsigned char sul;
    unsigned char este;
    unsigned char oeste;
} MAPA;

MAPA*create_mapa(unsigned int xdim, unsigned int ydim, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste);
void destroy_map(MAPA*mp);
void destroy_map_full(MAPA*mp, void(item_destroy)(ITEM*item));

void mapa_put(MAPA*mp, unsigned int x, unsigned int y, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste, ITEM*item);
ITEM*mapa_get(MAPA*mp, unsigned int x, unsigned int y, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste);

#endif
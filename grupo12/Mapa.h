#ifndef Mapa.H
#define Mapa.H

typedef void *ITEM;
typedef struct {
    ITEM*map;
    unsigned int xdim;
    unsigned int ydim;
    unsigned char norte;
    unsigned char sul;
    unsigned char este;
    unsigned char oeste;
} Mapa;

Mapa*create_map(unsigned int xdim, unsigned int ydim, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste);
void destroy_Mapa(Mapa*mp);
void destroy_mapa_full(Mapa*mp, void(item_destroy)ITEM*item);

void Mapa_put(Mapa*mp, unsigned int xdim, unsigned int ydim, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste, ITEM*item);
ITEM*Mapa_get(Mapa*mp, unsigned int xdim, unsigned int ydim, unsigned char norte, unsigned char sul, unsigned char este, unsigned char oeste);

#endif
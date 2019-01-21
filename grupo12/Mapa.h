#ifndef __MAPA_H__
#define __MAPA_H__

#define MAX 256

typedef void *ITEM;

/**
 * estrutura das coordenadas da grelha/mapa
 * */
typedef struct {
	ITEM*map;
	unsigned int xdim;
	unsigned int ydim;
	unsigned int grlh[MAX][MAX];
    } MAPA;

/**
 * define funções de criação e destruição do mapa
 * */
MAPA*create_mapa(unsigned int xdim, unsigned int ydim);
void destroy_map(MAPA*mp);
void destroy_map_full(MAPA*mp, void(item_destroy)(ITEM*item));

void mapa_put(MAPA*mp, unsigned int x, unsigned int y, ITEM*item);
ITEM*mapa_get(MAPA*mp, unsigned int x, unsigned int y);

#endif

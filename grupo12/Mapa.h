#ifndef __MAPA_H__
#define __MAPA_H__

typedef void *ITEM;

typedef struct {
	ITEM*map;
	unsigned int xdim;
	unsigned int ydim;
    } MAPA;

MAPA*create_mapa(unsigned int xdim, unsigned int ydim);
void destroy_map(MAPA*mp);
void destroy_map_full(MAPA*mp, void(item_destroy)(ITEM*item));

void mapa_put(MAPA*mp, unsigned int x, unsigned int y, ITEM*item);
ITEM*mapa_get(MAPA*mp, unsigned int x, unsigned int y);

#endif

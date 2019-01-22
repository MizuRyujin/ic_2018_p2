#ifndef __MAPA_H__
#define __MAPA_H__

#define MAX 256

/**
 * estrutura das coordenadas da grelha/mapa
 * */

typedef enum BEARINGS {North, West, East, South} brngs;

typedef struct {
        int coordinates;
        brngs brngs;
        int value;
	int grid[MAX];
        } NODE;

/**
 * estrutura das coordenadas da grelha/mapa
 * */
typedef struct {
	NODE*map;
	unsigned int xdim;
	unsigned int ydim;
    } MAPA;

/**
 * define funções de criação e destruição do mapa
 * */
MAPA*create_mapa(unsigned int xdim, unsigned int ydim);
void destroy_map(MAPA*mp);
void destroy_map_full(MAPA*mp, void(item_destroy)(NODE*node));

void mapa_put(MAPA*mp, unsigned int x, unsigned int y, NODE*node);
NODE*mapa_get(MAPA*mp, unsigned int x, unsigned int y);

/**
* define funções de criar o grafismo em sí
**/

NODE createNew(MAPA *mp);
void updateMapa(NODE node, MAPA *mp);
void destroyMapa(NODE node);


#endif

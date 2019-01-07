#ifndef __BORBOLETA_H__
#define __BORBOLETA_H__

#include <stdio.h>
#include "player.h"

#define MAX 125

typedef struct {
	enum {desert; iron; brick; wool; grain; lumber};
	int coordinate;
	}TERRAIN;

typedef struct {
	TERRAIN north, south, east, west;
	int player
	enum {nome; aldeia; cidade};
	}NODE;

#endif

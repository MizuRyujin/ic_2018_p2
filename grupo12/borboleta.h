#ifndef __BORBOLETA_H__
#define __BORBOLETA_H__

#include <stdio.h>
#include "player.h"

typedef struct {
	enum {desert, iron, brick, wool, grain, lumber} resource;
	int dieValue;
	}TERRAIN;

typedef struct {
	TERRAIN north, south, east, west;
	int player;
	int coordinates;
	enum {nome, aldeia, cidade} nodeInfo;
	}NODE;

#endif

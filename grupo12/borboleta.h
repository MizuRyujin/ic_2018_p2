#ifndef __BORBOLETA_H__
#define __BORBOLETA_H__

#include <stdio.h>
#include "player.h"

typedef struct {
	enum {desert, iron, brick, wool, grain, lumber} recurso;
	int valorDado;
	}TERRAIN;

typedef struct {
	TERRAIN north, south, east, west;
	int player;
	int coordinate;
	enum {nome, aldeia, cidade} infoNode;
	}NODE;

#endif

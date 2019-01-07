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




char map [MAX][MAX];
int north = 1;
int south = 1;
int east = 1;
int west = 1;
char village = 1;
char city = 1;
char player = 1;

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <stdio.h>
#include "borboleta.h"
#define MAX 256
char line[MAX];
typedef struct {
	int wool;
	int grain;
	int lumber;
	int brick;
	int iron;
	}RESOURCES;

typedef struct {
	int village;
	int city;
	}TERRITORY;
typedef struct {

	char name[100];
	RESOURCES resources;
	TERRITORY territory;
//	struct TERRAIN recurso;
	int victory_points;
	}PLAYER;

void turn(PLAYER a, PLAYER b, int Turn) {
        if (Turn % 2 == 0) {
                printf("%s\n", b.name);
        }
        else {
                printf("%s\n", a.name);
        }
    }

void Mostrar(PLAYER x)
{
	printf("Name		    : %s\n", x.name);
	printf("Resources	    : %d wool/%d grain/%d lumber/%d brick/%d iron\n", x.resources.wool, x.resources.grain, x.resources.lumber, x.resources.brick, x.resources.iron);
	printf("Territory	    : %d villages/%d citys\n", x.territory.village, x.territory.city);
	printf("victory points	: %d\n", x.victory_points);

}



#endif

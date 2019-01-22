#ifndef __PLAYER1_H__
#define __PLAYER1_H__

#include <stdio.h>
#include <time.h>
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
                printf("%s, it's your time to play\n", b.name);
        }
        else {
                printf("%s, it's your time to play\n", a.name);
        }
    }

void Mostrar(PLAYER x)
{
	printf("Name		    : %s\n", x.name);
	printf("Resources	    : %d wool/%d grain/%d lumber/%d brick/%d iron\n", x.resources.wool, x.resources.grain, x.resources.lumber, x.resources.brick, x.resources.iron);
	printf("Territory	    : %d villages/%d citys\n", x.territory.village, x.territory.city);
	printf("victory points	: %d\n", x.victory_points);

}

int randomNumber(int min, int max)		//Gerador de numero aleatorio e função de roleta a seguir
{
	if(min>max)
	{
		int aux = min;
		min = max;
		max = aux;
	}
	return min + rand() % ((max-min)+1);
}


#endif

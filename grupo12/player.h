#include <stdio.h>

typedef struct
	{
		int wool;
		int grain;
		int lumber;
		int brick;
		int iron;
	} RESOURCES;

typedef struct
	{
	int village;
	int city;
	} TERRITORY;

typedef struct player
{
	char name[100];
	RESOURCES resources;
	TERRITORY territory;
	int victory_points;

} PLAYER;

int Turn() {
    int Turn_p1;
    int Turn_p2;
    int Turn = 1;
    if (Turn % 2 == 0) {
            Turn_p2=1;
    }
    else {
            Turn_p1=1;
    }
}

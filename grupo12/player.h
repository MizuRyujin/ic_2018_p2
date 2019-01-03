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

int player_land[];


#ifndef __PLAYER2_H__
#define __PLAYER2_H__

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
	int cord_1;
	int cord_2;
	int cord_3;
	int cord_4;
	int cord_5;
	int cord_6;
	int cord_7;
	int cord_8;
	int cord_9;
	int cord_10;
	int cord_11;
	int cord_12;
	int cord_13;
	int cord_14;
	int cord_15;
	int cord_16;
	RESOURCES resources;
	TERRITORY territory;
	int victory_points;
	}PLAYER;

void turn(PLAYER x1, PLAYER x2, int Turn);

int dice(int dice1, int dice2);

void Mostrar(PLAYER x);

int trade4(PLAYER x);

int randomNumber(int min, int max);

#endif

#ifndef __PLAYER2_H__
#define __PLAYER2_H__

#include <stdio.h>
#include <time.h>

#define MAX 256

char line[MAX];
/**
 * estruturas dos recursos e das aldeias e cidades
 * */
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

/**
 * estado do jogador
 * */

typedef struct {
	char name[100];
	RESOURCES resources;
	TERRITORY territory;
	int victory_points;
	}PLAYER;
/**
 * variáveis que entram para
 * as funções dos dados 
 * e turnos de jogador
 * 
 * */
void turn(PLAYER x1, PLAYER x2, int Turn);

int dice(int dice1, int dice2);

void Mostrar(PLAYER x);

int trade4(PLAYER x);

int randomNumber(int min, int max);

#endif

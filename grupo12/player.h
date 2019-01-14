#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <stdio.h>
#include "borboleta.h"
//typedef struct {
//	int wool;
//	int grain;
//	int lumber;
//	int brick;
//	int iron;
//	}RESOURCES;

//typedef struct {
//	int village;
//	int city;
//	}TERRITORY;

typedef struct {
	char name[100];
//	RESOURCES resources;
//	TERRITORY territory;
	struct TERRAIN recurso;
	int victory_points;
	}PLAYER;

//int Turn() {
  //  int Turn_p1;
  //  int Turn_p2;
  //  int Turn = 1;
  //  if (Turn % 2 == 0) {
  //          Turn_p2=1;
  //  }
  //  else {
  //          Turn_p1=1;
  //  }
//}

#endif

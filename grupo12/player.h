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
                printf("%s", b.name);
        }
        else {
                printf("%s", a.name);
        }
    }

void Mostrar(PLAYER x)
{
	printf("Name		    : %s\n", x.name);
	printf("Resources	    : %d wool/%d grain/%d lumber/%d brick/%d iron\n", x.resources.wool, x.resources.grain, x.resources.lumber, x.resources.brick, x.resources.iron);
	printf("Territory	    : %d villages/%d citys\n", x.territory.village, x.territory.city);
	printf("victory points	: %d\n", x.victory_points);

}

void trade4(PLAYER x, char Trade41) {
        char Trade_Confirm;
        if (x.resources.wool >= 4) {
            printf("you have %d wool \n", x.resources.wool);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y') {
                printf("which one do you wish to adquire? \n");
                printf("g for grain \n");
                printf("l for lumber \n");
                printf("b for brick \n");
                printf("i for iron \n");
                fgets(line,MAX,stdin);
                sscanf(line, " %c", &Trade41);

                switch(Trade41)
                            {

                            case 'w': x.resources.wool++; x.resources.wool-= 4; Mostrar(x); break;
                            case 'g': x.resources.grain++; x.resources.wool-= 4; Mostrar(x); break;
                            case 'l': x.resources.lumber++; x.resources.wool-= 4; Mostrar(x); break;
                            case 'b': x.resources.brick++; x.resources.wool-= 4; Mostrar(x); break;
                            case 'i': x.resources.iron++; x.resources.wool-= 4; Mostrar(x); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (x.resources.grain >= 4) {
            printf("you have %d grain \n", x.resources.grain);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y') {
                printf("which one do you wish to adquire? \n");
                printf("w for wool \n");
                printf("l for lumber \n");
                printf("b for brick \n");
                printf("i for iron \n");
                fgets(line,MAX,stdin);
                sscanf(line, " %c", &Trade41);

                switch(Trade41)
                            {

                            case 'w': x.resources.wool++; x.resources.grain-= 4; Mostrar(x); break;
                            case 'g': x.resources.grain++; x.resources.grain-= 4; Mostrar(x); break;
                            case 'l': x.resources.lumber++; x.resources.grain-= 4; Mostrar(x); break;
                            case 'b': x.resources.brick++; x.resources.grain-= 4; Mostrar(x); break;
                            case 'i': x.resources.iron++; x.resources.grain-= 4; Mostrar(x); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (x.resources.lumber >= 4) {
            printf("you have %d lumber \n", x.resources.lumber);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y') {
                printf("which one do you wish to adquire? \n");
                printf("w for wool \n");
                printf("g for grain \n");
                printf("b for brick \n");
                printf("i for iron \n");
                fgets(line,MAX,stdin);
                sscanf(line, " %c", &Trade41);

                switch(Trade41)
                            {

                            case 'w': x.resources.wool++; x.resources.lumber-= 4; Mostrar(x); break;
                            case 'g': x.resources.grain++; x.resources.lumber-= 4; Mostrar(x); break;
                            case 'l': x.resources.lumber++; x.resources.lumber-= 4; Mostrar(x); break;
                            case 'b': x.resources.brick++; x.resources.lumber-= 4; Mostrar(x); break;
                            case 'i': x.resources.iron++; x.resources.lumber-= 4; Mostrar(x); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (x.resources.brick >= 4) {
            printf("you have %d brick \n", x.resources.brick);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y') {
                printf("which one do you wish to adquire? \n");
                printf("w for wool \n");
                printf("g for grain \n");
                printf("l for lumber \n");
                printf("i for iron \n");
                fgets(line,MAX,stdin);
                sscanf(line, " %c", &Trade41);

                switch(Trade41)
                            {

                            case 'w': x.resources.wool++; x.resources.brick-= 4; Mostrar(x); break;
                            case 'g': x.resources.grain++; x.resources.brick-= 4; Mostrar(x); break;
                            case 'l': x.resources.lumber++; x.resources.brick-= 4; Mostrar(x); break;
                            case 'b': x.resources.brick++; x.resources.brick-= 4; Mostrar(x); break;
                            case 'i': x.resources.iron++; x.resources.brick-= 4; Mostrar(x); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (x.resources.iron >= 4) {
            printf("you have %d iron \n", x.resources.iron);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y') {
                printf("which one do you wish to adquire? \n");
                printf("w for wool \n");
                printf("g for grain \n");
                printf("l for lumber \n");
                printf("b for brick \n");
                fgets(line,MAX,stdin);
                sscanf(line, " %c", &Trade41);

                switch(Trade41)
                            {

                            case 'w': x.resources.wool++; x.resources.iron-= 4; Mostrar(x); break;
                            case 'g': x.resources.grain++; x.resources.iron-= 4; Mostrar(x); break;
                            case 'l': x.resources.lumber++; x.resources.iron-= 4; Mostrar(x); break;
                            case 'b': x.resources.brick++; x.resources.iron-= 4; Mostrar(x); break;
                            case 'i': x.resources.iron++; x.resources.iron-= 4; Mostrar(x); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }
}

void trade10(PLAYER x, char Trade10) {
    char Trade_Confirm;
    if (x.resources.wool >= 10) {
        printf("you have %d wool \n", x.resources.wool);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            x.resources.wool -= 10;
            x.victory_points++;
            Mostrar(x);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (x.resources.grain >= 10) {
        printf("you have %d grain \n", x.resources.grain);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            x.resources.grain -= 10;
            x.victory_points++;
            Mostrar(x);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (x.resources.lumber >= 10) {
        printf("you have %d lumber \n", x.resources.lumber);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            x.resources.lumber -= 10;
            x.victory_points++;
            Mostrar(x);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (x.resources.brick >= 10) {
        printf("you have %d brick \n", x.resources.brick);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            x.resources.brick -= 10;
            x.victory_points++;
            Mostrar(x);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (x.resources.iron >= 10) {
        printf("you have %d iron \n", x.resources.iron);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            x.resources.iron -= 10;
            x.victory_points++;
            Mostrar(x);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }



}

//void vp_up(PLAYER a, PLAYER b, int VP_Up) <- estava a tentar fazer uma função que aumentasse os Victory points
//sempre que aumentasse as villages e +1 VP sempre que melhorasse uma village para city mas ja estou a morrer e
//não encontro nada...

#endif

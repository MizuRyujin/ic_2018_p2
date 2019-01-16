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

void trade4(PLAYER a, PLAYER b, char Trade41) {
        char Trade_Confirm;
        if (a.resources.wool >= 4) {
            printf("you have %d wool \n", a.resources.wool);
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

                            case 'w': a.resources.wool++; a.resources.wool-= 4; Mostrar(a); break;
                            case 'g': a.resources.grain++; a.resources.wool-= 4; Mostrar(a); break;
                            case 'l': a.resources.lumber++; a.resources.wool-= 4; Mostrar(a); break;
                            case 'b': a.resources.brick++; a.resources.wool-= 4; Mostrar(a); break;
                            case 'i': a.resources.iron++; a.resources.wool-= 4; Mostrar(a); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (a.resources.grain >= 4) {
            printf("you have %d grain \n", a.resources.grain);
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

                            case 'w': a.resources.wool++; a.resources.grain-= 4; Mostrar(a); break;
                            case 'g': a.resources.grain++; a.resources.grain-= 4; Mostrar(a); break;
                            case 'l': a.resources.lumber++; a.resources.grain-= 4; Mostrar(a); break;
                            case 'b': a.resources.brick++; a.resources.grain-= 4; Mostrar(a); break;
                            case 'i': a.resources.iron++; a.resources.grain-= 4; Mostrar(a); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (a.resources.lumber >= 4) {
            printf("you have %d lumber \n", a.resources.lumber);
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

                            case 'w': a.resources.wool++; a.resources.lumber-= 4; Mostrar(a); break;
                            case 'g': a.resources.grain++; a.resources.lumber-= 4; Mostrar(a); break;
                            case 'l': a.resources.lumber++; a.resources.lumber-= 4; Mostrar(a); break;
                            case 'b': a.resources.brick++; a.resources.lumber-= 4; Mostrar(a); break;
                            case 'i': a.resources.iron++; a.resources.lumber-= 4; Mostrar(a); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (a.resources.brick >= 4) {
            printf("you have %d brick \n", a.resources.brick);
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

                            case 'w': a.resources.wool++; a.resources.brick-= 4; Mostrar(a); break;
                            case 'g': a.resources.grain++; a.resources.brick-= 4; Mostrar(a); break;
                            case 'l': a.resources.lumber++; a.resources.brick-= 4; Mostrar(a); break;
                            case 'b': a.resources.brick++; a.resources.brick-= 4; Mostrar(a); break;
                            case 'i': a.resources.iron++; a.resources.brick-= 4; Mostrar(a); break;
                            }
            }
            else if(Trade_Confirm == 'n') {
                printf("you keep your resources as is then");
            }
            else {
                printf("that doesn't answer my question");
            }
        }

        if (a.resources.iron >= 4) {
            printf("you have %d iron \n", a.resources.iron);
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

                            case 'w': a.resources.wool++; a.resources.iron-= 4; Mostrar(a); break;
                            case 'g': a.resources.grain++; a.resources.iron-= 4; Mostrar(a); break;
                            case 'l': a.resources.lumber++; a.resources.iron-= 4; Mostrar(a); break;
                            case 'b': a.resources.brick++; a.resources.iron-= 4; Mostrar(a); break;
                            case 'i': a.resources.iron++; a.resources.iron-= 4; Mostrar(a); break;
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

void trade10(PLAYER a, PLAYER b, char Trade10) {
    char Trade_Confirm;
    if (a.resources.wool >= 10) {
        printf("you have %d wool \n", a.resources.wool);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            a.resources.wool -= 10;
            a.victory_points++;
            Mostrar(a);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (a.resources.grain >= 10) {
        printf("you have %d grain \n", a.resources.grain);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            a.resources.grain -= 10;
            a.victory_points++;
            Mostrar(a);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (a.resources.lumber >= 10) {
        printf("you have %d lumber \n", a.resources.lumber);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            a.resources.lumber -= 10;
            a.victory_points++;
            Mostrar(a);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (a.resources.brick >= 10) {
        printf("you have %d brick \n", a.resources.brick);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            a.resources.brick -= 10;
            a.victory_points++;
            Mostrar(a);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

    if (a.resources.iron >= 10) {
        printf("you have %d iron \n", a.resources.iron);
        printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &Trade_Confirm);
        if(Trade_Confirm == 'y') {
            a.resources.iron -= 10;
            a.victory_points++;
            Mostrar(a);
        }
        else if(Trade_Confirm == 'n') {
            printf("you keep your resources as is then");
        }
        else {
            printf("that doesn't answer my question");
        }
    }

void



}

//void vp_up(PLAYER a, PLAYER b, int VP_Up) <- estava a tentar fazer uma função que aumentasse os Victory points
//sempre que aumentasse as villages e +1 VP sempre que melhorasse uma village para city mas ja estou a morrer e
//não encontro nada...

#endif

#include <stdio.h>
#include "player1.h"
#define MAX 256
char line[MAX];
char Trade10[MAX];
char Trade41;

int main()
{
        int Turn = 1;

    PLAYER a = {"",{0,0,0,0,0},{0,0},0};

	printf("Player1 please state your name:\n");

	gets(a.name);

	Mostrar(a);

	PLAYER b = {"",{0,0,0,0,0},{0,0},0};

	printf("Player2 please state your name:\n");

	gets(b.name);

	Mostrar(b);


	turn(a, b, Turn);

	char Dice_p1;
	char Dice_p2;
	printf("que recurso aumenta player 1?");
	fgets(line,MAX,stdin);
	sscanf(line, " %c", &Dice_p1);

	switch(Dice_p1)
                {

                case 'w': a.resources.wool++; Mostrar(a); break;
                case 'g': a.resources.grain++; Mostrar(a); break;
                case 'l': a.resources.lumber++; Mostrar(a); break;
                case 'b': a.resources.brick++; Mostrar(a); break;
                case 'i': a.resources.iron++; Mostrar(a); break;
                case 'd': printf("Só há deserto nessa direção\n"); break;
                default : printf("\n"); break;
                }

    if (a.resources.wool >= 4 || a.resources.grain >= 4 || a.resources.lumber >= 4 || a.resources.brick >= 4 || a.resources.iron >= 4) {
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
                    printf("you keep your resources as is then\n");
                }
                else {
                    printf("that doesn't answer my question\n");
                    //trade4(a);
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
                    printf("that doesn't answer my question\n");
                    //trade4(a);
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
                    printf("that doesn't answer my question\n");
                    //trade4(a);
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
                    printf("that doesn't answer my question\n");
                    //trade4(a);
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
                    printf("that doesn't answer my question\n");
                    //trade4(a);
                }
        }
    }

    if (a.resources.wool >= 10 || a.resources.grain >= 10 || a.resources.lumber >= 10 || a.resources.brick >= 10 || a.resources.iron >= 10) {
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
                printf("that doesn't answer my question\n");
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
                printf("that doesn't answer my question\n");
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
                printf("that doesn't answer my question\n");
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
                printf("that doesn't answer my question\n");
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
                printf("that doesn't answer my question\n");
            }
        }
    }

    if(a.resources.wool >= 1 && a.resources.grain >= 1 && a.resources.lumber >= 1 && a.resources.brick >= 1) {
        char V_Choice;
        printf("wanna buy a village? \n y for yes \n n for no");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &V_Choice);
        if(V_Choice == 'y') {
            a.resources.wool--;
            a.resources.grain--;
            a.resources.lumber--;
            a.resources.brick--;
            a.territory.village++;
            Mostrar(a);
        }
        else if(V_Choice == 'n') {
            printf("maybe next round then");
        }
        else {
            printf("that doesn't answer my question\n");
        }
    }

    if(a.resources.iron >= 3 && a.resources.grain >= 2 && a.territory.village >= 1) {
            char C_Choice;
            printf("wanna buy a city? \n y for yes \n n for no");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &C_Choice);
            if(C_Choice == 'y') {
                a.resources.iron -= 3;
                a.resources.grain -= 2;
                a.territory.city++;
                a.territory.village--;
                Mostrar(a);
            }
            else if(C_Choice == 'n') {
                printf("maybe next round then");
            }
            else {
                printf("that doesn't answer my question\n");
            }
    }

    /*a.territory.village++;

    if(a.territory.village++)
        a.victory_points++;
    else if(a.territory.city++)
        a.victory_points++;*/

    Mostrar(a);

    printf("que recurso aumenta player 2?");

    fgets(line,MAX,stdin);
    sscanf(line, " %c", &Dice_p2);

    switch(Dice_p2)
                {

                case 'w': b.resources.wool++; Mostrar(b); break;
                case 'g': b.resources.grain++; Mostrar(b); break;
                case 'l': b.resources.lumber++; Mostrar(b); break;
                case 'b': b.resources.brick++; Mostrar(b); break;
                case 'i': b.resources.iron++; Mostrar(b); break;
                case 'd': printf("Só há deserto nessa direção\n"); break;
                default : printf("\n"); break;
                }

}


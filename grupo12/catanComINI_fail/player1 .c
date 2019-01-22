#include <stdio.h>
#include "player1.h"
#include <time.h>

#define MAX 256

char line[MAX];
char Trade10[MAX];
char Trade41;
int Turn = 1;
int dice1;
int dice2;
int roll;

int randomNumber(int min, int max)
{
	if(min>max)
	{
		int aux = min;
		min = max;
		max = aux;
	}
	return min + rand() % ((max - min) + 1);
}

int dice(int dice1, int dice2)
{
    srand(time(NULL));
    dice1 = randomNumber(1,6);
    dice2 = randomNumber(1,6);
    roll = dice1 + dice2;
    printf("you rolled a %d\n", roll);
    return roll;

}

void Mostrar(PLAYER x)
{
        printf("Name                : %s\n", x.name);
	printf("Resources           : %d wool/%d grain/%d lumber/%d brick/%d iron\n", x.resources.wool, x.resources.grain, x.resources.lumber, x.resources.brick, x.resources.iron);
        printf("Territory           : %d villages/%d citys\n", x.territory.village, x.territory.city);
        printf("victory points  : %d\n", x.victory_points);

}


void turn(PLAYER x1, PLAYER x2, int Turn)
{
        if (Turn % 2 == 0) {
                printf("%s, it's your time to play\n", x2.name);
        }
        else {
                printf("%s, it's your time to play\n", x1.name);
        }
}



//funcao de troca 4 por 1
int trade4(PLAYER x) {
        if (x.resources.wool >= 4 || x.resources.grain >= 4 || x.resources.lumber >= 4 || x.resources.brick >= 4 || x.resources.iron >= 4)
	{
        	char Trade_Confirm;
        	if (x.resources.wool >= 4)
		{
			printf("you have %d wool \n", x.resources.wool);
                        printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &Trade_Confirm);
                	if(Trade_Confirm == 'y')
			{
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
                                printf("you keep your resources as is then\n");
                            }
                            else {
                                printf("that doesn't answer my question\n");
                                //trade4(a);
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
                                printf("that doesn't answer my question\n");
                                //trade4(a);
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
                                printf("that doesn't answer my question\n");
                                //trade4(a);
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
                                printf("that doesn't answer my question\n");
                                //trade4(a);
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
                                printf("that doesn't answer my question\n");
                                //trade4(a);
                            }
                    }
                }
            }

//troca por pontos de vitoria 10 por 1 

            int trade10(PLAYER x) {
                if (x.resources.wool >= 10 || x.resources.grain >= 10 || x.resources.lumber >= 10 || x.resources.brick >= 10 || x.resources.iron >= 10) {
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
                            printf("that doesn't answer my question\n");
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
                            printf("that doesn't answer my question\n");
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
                            printf("that doesn't answer my question\n");
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
                            printf("that doesn't answer my question\n");
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
                            printf("that doesn't answer my question\n");
                        }
                    }
                }
            }

//Comprar uma aldeia

            int buy_village(PLAYER x) {
                if(x.resources.wool >= 1 && x.resources.grain >= 1 && x.resources.lumber >= 1 && x.resources.brick >= 1) {
                    char V_Choice;
                    printf("wanna buy a village? \n y for yes \n n for no");
                    fgets(line,MAX,stdin);
                    sscanf(line, " %c", &V_Choice);
                    if(V_Choice == 'y') {
                        x.resources.wool--;
                        x.resources.grain--;
                        x.resources.lumber--;
                        x.resources.brick--;
                        x.territory.village++;
                        x.victory_points++;
                        Mostrar(x);
                    }
                    else if(V_Choice == 'n') {
                        printf("maybe next round then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                    }
                }
            }

//Comprar uma cidade

            int buy_city(PLAYER x) {
                if(x.resources.iron >= 3 && x.resources.grain >= 2 && x.territory.village >= 1) {
                        char C_Choice;
                        printf("wanna buy a city? \n y for yes \n n for no");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &C_Choice);
                        if(C_Choice == 'y') {
                            x.resources.iron -= 3;
                            x.resources.grain -= 2;
                            x.territory.city++;
                            x.territory.village--;
                            x.victory_points++;
                            Mostrar(x);
                        }
                        else if(C_Choice == 'n') {
                            printf("maybe next round then");
                        }
                        else {
                            printf("that doesn't answer my question\n");
                        }
                }
            }



#include <stdio.h>
#include "player2.h"
#include <time.h>

#define MAX 256

char line[MAX];
char Trade10[MAX];
char Trade41;
int pos_choice;
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
    return roll;

}

void Mostrar(PLAYER x)
{
        printf("Name                : %s\n", x.name);
        printf("Resources           : %d wool/%d grain/%d lumber/%d brick/%d iron\n", x.resources.wool, x.resources.grain, x.resources.lumber, x.resources.brick, x.resources.iron);
        printf("Territory           : %d villages/%d citys\n", x.territory.village, x.territory.city);
        printf("victory points  : %d\n", x.victory_points);
}

int pos(PLAYER x)
{
    fgets(line,MAX,stdin);
    sscanf(line, " %d", &pos_choice);
    switch(pos_choice)
    {
        case 1 : x.cord_1++; break;
        case 2 : x.cord_2++; break;
        case 3 : x.cord_3++; break;
        case 4 : x.cord_4++; break;
        case 5 : x.cord_5++; break;
        case 6 : x.cord_6++; break;
        case 7 : x.cord_7++; break;
        case 8 : x.cord_8++; break;
        case 9 : x.cord_9++; break;
        case 10 : x.cord_10++; break;
        case 11 : x.cord_11++; break;
        case 12 : x.cord_12++; break;
        case 13 : x.cord_13++; break;
        case 14 : x.cord_14++; break;
        case 15 : x.cord_15++; break;
        case 16 : x.cord_16++; break;
	default : "Not a valid position\n";
    }
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
                                trade4(x);
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
                                printf("you keep your resources as is then\n");
                            }
                            else {
                                printf("that doesn't answer my question\n");
                                trade4(x);
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
                                printf("you keep your resources as is then\n");
                            }
                            else {
                                printf("that doesn't answer my question\n");
                                trade4(x);
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
                                printf("you keep your resources as is then\n");
                            }
                            else {
                                printf("that doesn't answer my question\n");
                                trade4(x);
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
                                printf("you keep your resources as is then\n");
                            }
                            else {
                                printf("that doesn't answer my question\n");
                                trade4(x);
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
                            printf("you keep your resources as is then\n");
                        }
                        else {
                            printf("that doesn't answer my question\n");
                            trade10(x);
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
                            printf("you keep your resources as is then\n");
                        }
                        else {
                            printf("that doesn't answer my question\n");
                            trade10(x);
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
                            printf("you keep your resources as is then\n");
                        }
                        else {
                            printf("that doesn't answer my question\n");
                            trade10(x);
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
                            printf("you keep your resources as is then\n");
                        }
                        else {
                            printf("that doesn't answer my question\n");
                            trade10(x);
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
                            printf("you keep your resources as is then\n");
                        }
                        else {
                            printf("that doesn't answer my question\n");
                            trade10(x);
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
                        printf("where do you want your village? it can only be next to a terrain that is already yours\n");
                        if(x.cord_1 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 2 : x.cord_2++; break;
                                case 5 : x.cord_5++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_2 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 1 : x.cord_1++; break;
                                case 3 : x.cord_3++; break;
                                case 6 : x.cord_6++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_3 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 2 : x.cord_2++; break;
                                case 4 : x.cord_4++; break;
                                case 7 : x.cord_7++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_4 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 3 : x.cord_3++; break;
                                case 8 : x.cord_8++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_5 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 1 : x.cord_1++; break;
                                case 6 : x.cord_6++; break;
                                case 9 : x.cord_9++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_6 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 2 : x.cord_2++; break;
                                case 5 : x.cord_5++; break;
                                case 7 : x.cord_7++; break;
                                case 10 : x.cord_10++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_7 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 6 : x.cord_6++; break;
                                case 8 : x.cord_8++; break;
                                case 3 : x.cord_3++; break;
                                case 11 : x.cord_11++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_8 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 12 : x.cord_12++; break;
                                case 4 : x.cord_4++; break;
                                case 7 : x.cord_7++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_9 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 5 : x.cord_5++; break;
                                case 13 : x.cord_13++; break;
                                case 10 : x.cord_10++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_10 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 9 : x.cord_9++; break;
                                case 6 : x.cord_6++; break;
                                case 11 : x.cord_11++; break;
                                case 14 : x.cord_14++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_11 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 12 : x.cord_12++; break;
                                case 10 : x.cord_10++; break;
                                case 15 : x.cord_15++; break;
                                case 7 : x.cord_7++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_12 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 11 : x.cord_11++; break;
                                case 8 : x.cord_8++; break;
                                case 16 : x.cord_16++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_13 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 9 : x.cord_9++; break;
                                case 14 : x.cord_14++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_14 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 13 : x.cord_13++; break;
                                case 15 : x.cord_15++; break;
                                case 10 : x.cord_10++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_15 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 14 : x.cord_14++; break;
                                case 16 : x.cord_16++; break;
                                case 11 : x.cord_11++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        else if (x.cord_16 = 1)
                        {
                            fgets(line,MAX,stdin);
                            sscanf(line, " %d", &pos_choice);
                            switch(pos_choice)
                            {
                                case 15 : x.cord_15++; break;
                                case 12 : x.cord_12++; break;
                                default : printf("you cant buy that house\n"); buy_village(x);break;
                            }
                        }
                        Mostrar(x);
                    }
                    else if(V_Choice == 'n') {
                        printf("maybe next round then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                        buy_village(x);
                    }
                }
            }

//Comprar uma cidade

            int buy_city(PLAYER x) {
                if(x.resources.iron >= 3 && x.resources.grain >= 2 && x.territory.village >= 1) {
                        char C_Choice;
                        printf("wanna buy a city? \n y for yes \n n for no\n");
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
                            printf("maybe next round then\n");
                        }
                        else {
                            printf("that doesn't answer my question\n");
                            buy_city(x);
                        }
                }
            }



#include <stdio.h>
#include "player1.h"
#include <time.h>

char line[MAX];
char Trade10[MAX];
char Trade41;
int Turn = 1;
int dice1;
int dice2;
int roll;

int randomNumber(int min, int max)              //Gerador de numero aleatorio e função de roleta a seguir
{
    if(min>max)
    {
        int aux = min;
        min = max;
        max = aux;
    }
    return min + rand() % ((max-min)+1);
}

//Funcao para ter o total dos dois dados

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
    if (Turn % 2 == 0)
    {
        printf("%s, it's your time to play\n", x2.name);
    }
    else
    {
        printf("%s, it's your time to play\n", x1.name);
    }
}

//funcao de troca 4 por 1

int trade4(PLAYER x)
{
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
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then\n");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }

        if (x.resources.grain >= 4)
        {
            printf("you have %d grain \n", x.resources.grain);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
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
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
            printf("that doesn't answer my question\n");
            }
        }
        if (x.resources.lumber >= 4)
        {
            printf("you have %d lumber \n", x.resources.lumber);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
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
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question");
            }
        }
        if (x.resources.brick >= 4)
        {
            printf("you have %d brick \n", x.resources.brick);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
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
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }
        if (x.resources.iron >= 4)
        {
            printf("you have %d iron \n", x.resources.iron);
            printf("do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
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
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }
    }
}

//troca por pontos de vitoria 10 por 1

int trade10(PLAYER x)
{
    if (x.resources.wool >= 10 || x.resources.grain >= 10 || x.resources.lumber >= 10 || x.resources.brick >= 10 || x.resources.iron >= 10)
    {
        char Trade_Confirm;
        if (x.resources.wool >= 10)
        {
            printf("you have %d wool \n", x.resources.wool);
            printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
                x.resources.wool -= 10;
                x.victory_points++;
                Mostrar(x);
            }
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }
        if (x.resources.grain >= 10)
        {
            printf("you have %d grain \n", x.resources.grain);
            printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
                x.resources.grain -= 10;
                x.victory_points++;
                Mostrar(x);
            }
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }
        if (x.resources.lumber >= 10)
        {
            printf("you have %d lumber \n", x.resources.lumber);
            printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
                x.resources.lumber -= 10;
                x.victory_points++;
                Mostrar(x);
            }
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }
        if (x.resources.brick >= 10)
        {
            printf("you have %d brick \n", x.resources.brick);
            printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
                x.resources.brick -= 10;
                x.victory_points++;
                Mostrar(x);
            }
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }
        if (x.resources.iron >= 10)
        {
            printf("you have %d iron \n", x.resources.iron);
            printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
            fgets(line,MAX,stdin);
            sscanf(line, " %c", &Trade_Confirm);
            if(Trade_Confirm == 'y')
            {
                x.resources.iron -= 10;
                x.victory_points++;
                Mostrar(x);
            }
            else if(Trade_Confirm == 'n')
            {
                printf("you keep your resources as is then");
            }
            else
            {
                printf("that doesn't answer my question\n");
            }
        }
    }
}

//Comprar uma aldeia

int buy_village(PLAYER x)
{
    if(x.resources.wool >= 1 && x.resources.grain >= 1 && x.resources.lumber >= 1 && x.resources.brick >= 1)
    {
        char V_Choice;
        printf("wanna buy a village? \n y for yes \n n for no");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &V_Choice);
        if(V_Choice == 'y')
        {
            x.resources.wool--;
            x.resources.grain--;
            x.resources.lumber--;
            x.resources.brick--;
            x.territory.village++;
            x.victory_points++;
            Mostrar(x);
        }
        else if(V_Choice == 'n')
        {
            printf("maybe next round then");
        }
        else
        {
            printf("that doesn't answer my question\n");
        }
    }
}

//Comprar uma cidade

int buy_city(PLAYER x)
{
    if(x.resources.iron >= 3 && x.resources.grain >= 2 && x.territory.village >= 1)
    {
        char C_Choice;
        printf("wanna buy a city? \n y for yes \n n for no");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &C_Choice);
        if(C_Choice == 'y')
        {
            x.resources.iron -= 3;
            x.resources.grain -= 2;
            x.territory.city++;
            x.territory.village--;
            x.victory_points++;
            Mostrar(x);
        }
        else if(C_Choice == 'n')
        {
            printf("maybe next round then");
        }
        else
        {
            printf("that doesn't answer my question\n");
        }
    }
}

//Turno p2

            turn(x1, x2, Turn);
            Turn++;
            printf("que recurso aumenta player 2?\n");
            dice(dice1, dice2);
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

            if (b.resources.wool >= 4 || b.resources.grain >= 4 || b.resources.lumber >= 4 || b.resources.brick >= 4 || b.resources.iron >= 4) {
                char Trade_Confirm;
                    if (b.resources.wool >= 4) {
                        printf("you have %d wool \n", b.resources.wool);
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

                                        case 'w': b.resources.wool++; b.resources.wool-= 4; Mostrar(b); break;
                                        case 'g': b.resources.grain++; b.resources.wool-= 4; Mostrar(b); break;
                                        case 'l': b.resources.lumber++; b.resources.wool-= 4; Mostrar(b); break;
                                        case 'b': b.resources.brick++; b.resources.wool-= 4; Mostrar(b); break;
                                        case 'i': b.resources.iron++; b.resources.wool-= 4; Mostrar(b); break;
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

                    if (b.resources.grain >= 4) {
                        printf("you have %d grain \n", b.resources.grain);
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

                                        case 'w': b.resources.wool++; b.resources.grain-= 4; Mostrar(b); break;
                                        case 'g': b.resources.grain++; b.resources.grain-= 4; Mostrar(b); break;
                                        case 'l': b.resources.lumber++; b.resources.grain-= 4; Mostrar(b); break;
                                        case 'b': b.resources.brick++; b.resources.grain-= 4; Mostrar(b); break;
                                        case 'i': b.resources.iron++; b.resources.grain-= 4; Mostrar(b); break;
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

                    if (b.resources.lumber >= 4) {
                        printf("you have %d lumber \n", b.resources.lumber);
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

                                        case 'w': b.resources.wool++; b.resources.lumber-= 4; Mostrar(b); break;
                                        case 'g': b.resources.grain++; b.resources.lumber-= 4; Mostrar(b); break;
                                        case 'l': b.resources.lumber++; b.resources.lumber-= 4; Mostrar(b); break;
                                        case 'b': b.resources.brick++; b.resources.lumber-= 4; Mostrar(b); break;
                                        case 'i': b.resources.iron++; b.resources.lumber-= 4; Mostrar(b); break;
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

                    if (b.resources.brick >= 4) {
                        printf("you have %d brick \n", b.resources.brick);
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

                                        case 'w': b.resources.wool++; b.resources.brick-= 4; Mostrar(b); break;
                                        case 'g': b.resources.grain++; b.resources.brick-= 4; Mostrar(b); break;
                                        case 'l': b.resources.lumber++; b.resources.brick-= 4; Mostrar(b); break;
                                        case 'b': b.resources.brick++; b.resources.brick-= 4; Mostrar(b); break;
                                        case 'i': b.resources.iron++; b.resources.brick-= 4; Mostrar(b); break;
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

                    if (b.resources.iron >= 4) {
                        printf("you have %d iron \n", b.resources.iron);
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

                                        case 'w': b.resources.wool++; b.resources.iron-= 4; Mostrar(b); break;
                                        case 'g': b.resources.grain++; b.resources.iron-= 4; Mostrar(b); break;
                                        case 'l': b.resources.lumber++; b.resources.iron-= 4; Mostrar(b); break;
                                        case 'b': b.resources.brick++; b.resources.iron-= 4; Mostrar(b); break;
                                        case 'i': b.resources.iron++; b.resources.iron-= 4; Mostrar(b); break;
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

            if (b.resources.wool >= 10 || b.resources.grain >= 10 || b.resources.lumber >= 10 || b.resources.brick >= 10 || b.resources.iron >= 10) {
                char Trade_Confirm;
                if (b.resources.wool >= 10) {
                    printf("you have %d wool \n", b.resources.wool);
                    printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                    fgets(line,MAX,stdin);
                    sscanf(line, " %c", &Trade_Confirm);
                    if(Trade_Confirm == 'y') {
                        b.resources.wool -= 10;
                        b.victory_points++;
                        Mostrar(b);
                    }
                    else if(Trade_Confirm == 'n') {
                        printf("you keep your resources as is then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                    }
                }

                if (b.resources.grain >= 10) {
                    printf("you have %d grain \n", b.resources.grain);
                    printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                    fgets(line,MAX,stdin);
                    sscanf(line, " %c", &Trade_Confirm);
                    if(Trade_Confirm == 'y') {
                        b.resources.grain -= 10;
                        b.victory_points++;
                        Mostrar(b);
                    }
                    else if(Trade_Confirm == 'n') {
                        printf("you keep your resources as is then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                    }
                }

                if (b.resources.lumber >= 10) {
                    printf("you have %d lumber \n", b.resources.lumber);
                    printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                    fgets(line,MAX,stdin);
                    sscanf(line, " %c", &Trade_Confirm);
                    if(Trade_Confirm == 'y') {
                        b.resources.lumber -= 10;
                        b.victory_points++;
                        Mostrar(b);
                    }
                    else if(Trade_Confirm == 'n') {
                        printf("you keep your resources as is then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                    }
                }

                if (b.resources.brick >= 10) {
                    printf("you have %d brick \n", b.resources.brick);
                    printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                    fgets(line,MAX,stdin);
                    sscanf(line, " %c", &Trade_Confirm);
                    if(Trade_Confirm == 'y') {
                        b.resources.brick -= 10;
                        b.victory_points++;
                        Mostrar(b);
                    }
                    else if(Trade_Confirm == 'n') {
                        printf("you keep your resources as is then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                    }
                }

                if (b.resources.iron >= 10) {
                    printf("you have %d iron \n", b.resources.iron);
                    printf("do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                    fgets(line,MAX,stdin);
                    sscanf(line, " %c", &Trade_Confirm);
                    if(Trade_Confirm == 'y') {
                        b.resources.iron -= 10;
                        b.victory_points++;
                        Mostrar(b);
                    }
                    else if(Trade_Confirm == 'n') {
                        printf("you keep your resources as is then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                    }
                }
            }

            if(b.resources.wool >= 1 && b.resources.grain >= 1 && b.resources.lumber >= 1 && b.resources.brick >= 1) {
                char V_Choice;
                printf("wanna buy a village? \n y for yes \n n for no");
                fgets(line,MAX,stdin);
                sscanf(line, " %c", &V_Choice);
                if(V_Choice == 'y') {
                    b.resources.wool--;
                    b.resources.grain--;
                    b.resources.lumber--;
                    b.resources.brick--;
                    b.territory.village++;
                    b.victory_points++;
                    Mostrar(b);
                }
                else if(V_Choice == 'n') {
                    printf("maybe next round then");
                }
                else {
                    printf("that doesn't answer my question\n");
                }
            }

            if(b.resources.iron >= 3 && b.resources.grain >= 2 && b.territory.village >= 1) {
                    char C_Choice;
                    printf("wanna buy a city? \n y for yes \n n for no");
                    fgets(line,MAX,stdin);
                    sscanf(line, " %c", &C_Choice);
                    if(C_Choice == 'y') {
                        b.resources.iron -= 3;
                        b.resources.grain -= 2;
                        b.territory.city++;
                        b.territory.village--;
                        b.victory_points++;
                        Mostrar(b);
                    }
                    else if(C_Choice == 'n') {
                        printf("maybe next round then");
                    }
                    else {
                        printf("that doesn't answer my question\n");
                    }
            }

	}
}


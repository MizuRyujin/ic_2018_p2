#include <stdio.h>
#include "player2.h"
#include <time.h>

#define MAX 256
/**
 * variáveis para os dados
 * para trocas de recursos
 * e turnos
 * */
char line[MAX];
char Trade10[MAX];
char Trade41;
int Turn = 1;
int dice1;
int dice2;
int roll;
/**
 * funções do funcionamento dos dados
 * */
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

/**
 * função, rola dados
 * */
int dice(int dice1, int dice2)
{
    srand(time(NULL));
    dice1 = randomNumber(1,6);
    dice2 = randomNumber(1,6);
    roll = dice1 + dice2;
    printf("You rolled a %d\n!", roll);
    return roll;

}
/**
 * função de feedback ao estado do jogador
 * */
void Mostrar(PLAYER x)
{
        printf("Name                : %s\n", x.name);
	printf("Resources           : %d wool/%d grain/%d lumber/%d brick/%d iron\n", x.resources.wool, x.resources.grain, x.resources.lumber, x.resources.brick, x.resources.iron);
        printf("Territory           : %d villages/%d citys\n", x.territory.village, x.territory.city);
        printf("Victory Points  : %d\n", x.victory_points);

}

/**
 * função dos turnos dos jogadores
 * */

void turn(PLAYER x1, PLAYER x2, int Turn)
{
        if (Turn % 2 == 0) {
                printf("%s, it's your time to play\n!", x2.name);
        }
        else {
                printf("%s, it's your time to play\n!", x1.name);
        }
}



/**
 * função das trocas de recursos
 * */
int trade4(PLAYER x) {
        /**
         * verifica se os recursos são >= que 4, se sim,
         * o jogador pode escolher o que trocar
         * */
        if (x.resources.wool >= 4 || x.resources.grain >= 4 || x.resources.lumber >= 4 || x.resources.brick >= 4 || x.resources.iron >= 4)
	{
        	char Trade_Confirm;
        	if (x.resources.wool >= 4)
		{
            /**
             * troca de 1 recurso por 4 de woll
             * */
			printf("You have %d wool \n,", x.resources.wool);
                        printf("Do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &Trade_Confirm);
                	if(Trade_Confirm == 'y')
			{
				printf("Which one do you wish to adquire? \n");
                                printf("g for grain \n");
                                printf("l for lumber \n");
                                printf("b for brick \n");
                                printf("i for iron \n");
                                fgets(line,MAX,stdin);
                                sscanf(line, " %c", &Trade41);

                                switch(Trade41)
                                            {
                                            /**
                                            * troca
                                            * incrementa o recurso escolhido
                                            * decrementando 4 de wool
                                            * */
                                            case 'w': x.resources.wool++; x.resources.wool-= 4; Mostrar(x); break;
                                            case 'g': x.resources.grain++; x.resources.wool-= 4; Mostrar(x); break;
                                            case 'l': x.resources.lumber++; x.resources.wool-= 4; Mostrar(x); break;
                                            case 'b': x.resources.brick++; x.resources.wool-= 4; Mostrar(x); break;
                                            case 'i': x.resources.iron++; x.resources.wool-= 4; Mostrar(x); break;
                                            }
                            }
                            /**
                             * confirmação da troca
                             * */
                            else if(Trade_Confirm == 'n') {
                                printf("You keep your resources as is then\n.");
                            }
                            else {
                                /**
                                * mensagem de erro
                                * caso a resposta não corresponda
                                * às opções possíveis
                                * */
                                printf("That doesn't answer my question\n!");
                                //trade4(a);
                                printf("that doesn't answer my question\n");
                                trade4(x);
                            }
                        }
                        /**
                        * troca de 1 recurso por 4 grain
                        * */
                        if (x.resources.grain >= 4) {
                            printf("You have %d grain \n", x.resources.grain);
                            printf("Do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
                            fgets(line,MAX,stdin);
                            sscanf(line, " %c", &Trade_Confirm);
                            if(Trade_Confirm == 'y') {
                                printf("Which one do you wish to adquire? \n");
                                printf("w for wool \n");
                                printf("l for lumber \n");
                                printf("b for brick \n");
                                printf("i for iron \n");
                                fgets(line,MAX,stdin);
                                sscanf(line, " %c", &Trade41);

                                switch(Trade41)
                                            {
                                           /**
                                            * troca
                                            * incrementa o recurso escolhido
                                            * decrementando 4 de grain
                                            * */
                                            case 'w': x.resources.wool++; x.resources.grain-= 4; Mostrar(x); break;
                                            case 'g': x.resources.grain++; x.resources.grain-= 4; Mostrar(x); break;
                                            case 'l': x.resources.lumber++; x.resources.grain-= 4; Mostrar(x); break;
                                            case 'b': x.resources.brick++; x.resources.grain-= 4; Mostrar(x); break;
                                            case 'i': x.resources.iron++; x.resources.grain-= 4; Mostrar(x); break;
                                            }
                            }
                            /**
                             * confirmação da troca
                             * */
                            else if(Trade_Confirm == 'n') {
                                printf("You keep your resources as is then.");
                            }
                            /**
                            * mensagem de erro
                            * caso a resposta não corresponda
                            * às opções possíveis
                            * */
                            else {
                                printf("That doesn't answer my question\n!");
                                //trade4(a);
                                printf("that doesn't answer my question\n");
                                trade4(x);
                            }
                        }
                        /**
                        * troca de 1 recurso por 4 de lumber
                        * */
                        if (x.resources.lumber >= 4) {
                            printf("You have %d lumber \n,", x.resources.lumber);
                            printf("Do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
                            fgets(line,MAX,stdin);
                            sscanf(line, " %c", &Trade_Confirm);
                            if(Trade_Confirm == 'y') {
                                printf("Which one do you wish to adquire? \n");
                                printf("w for wool \n");
                                printf("g for grain \n");
                                printf("b for brick \n");
                                printf("i for iron \n");
                                fgets(line,MAX,stdin);
                                sscanf(line, " %c", &Trade41);

                                switch(Trade41)
                                            {
                                            /**
                                            * troca
                                            * incrementa o recurso escolhido
                                            * decrementando 4 de lumber
                                            * */
                                            case 'w': x.resources.wool++; x.resources.lumber-= 4; Mostrar(x); break;
                                            case 'g': x.resources.grain++; x.resources.lumber-= 4; Mostrar(x); break;
                                            case 'l': x.resources.lumber++; x.resources.lumber-= 4; Mostrar(x); break;
                                            case 'b': x.resources.brick++; x.resources.lumber-= 4; Mostrar(x); break;
                                            case 'i': x.resources.iron++; x.resources.lumber-= 4; Mostrar(x); break;
                                            }
                            }
                            /**
                             * confirmação da troca
                             * */
                            else if(Trade_Confirm == 'n') {
                                printf("You keep your resources as is then.");
                            }
                            /**
                            * mensagem de erro
                            * caso a resposta não corresponda
                            * às opções possíveis
                            * */
                            else {
                                printf("that doesn't answer my question\n!");
                                //trade4(a);
                                printf("that doesn't answer my question\n");
                                trade4(x);
                            }
                        }
                        /**
                        * troca de 1 recurso por 4 de brick
                        * */
                        if (x.resources.brick >= 4) {
                            printf("You have %d brick \n", x.resources.brick);
                            printf("Do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
                            fgets(line,MAX,stdin);
                            sscanf(line, " %c", &Trade_Confirm);
                            if(Trade_Confirm == 'y') {
                                printf("Which one do you wish to adquire? \n");
                                printf("w for wool \n");
                                printf("g for grain \n");
                                printf("l for lumber \n");
                                printf("i for iron \n");
                                fgets(line,MAX,stdin);
                                sscanf(line, " %c", &Trade41);

                                switch(Trade41)
                                            {
                                            /**
                                            * troca
                                            * incrementa o recurso escolhido
                                            * decrementando 4 de brick
                                            * */
                                            case 'w': x.resources.wool++; x.resources.brick-= 4; Mostrar(x); break;
                                            case 'g': x.resources.grain++; x.resources.brick-= 4; Mostrar(x); break;
                                            case 'l': x.resources.lumber++; x.resources.brick-= 4; Mostrar(x); break;
                                            case 'b': x.resources.brick++; x.resources.brick-= 4; Mostrar(x); break;
                                            case 'i': x.resources.iron++; x.resources.brick-= 4; Mostrar(x); break;
                                            }
                            }
                            /**
                             * confirmação da troca
                             * */
                            else if(Trade_Confirm == 'n') {
                                printf("You keep your resources as is then.");
                            }
                            /**
                            * mensagem de erro
                            * caso a resposta não corresponda
                            * às opções possíveis
                            * */
                            else {
                                printf("That doesn't answer my question\n!");
                                //trade4(a);
                                printf("that doesn't answer my question\n");
                                trade4(x);
                            }
                        }
                        /**
                        * troca de 1 recurso por 4 de iron
                        * */
                        if (x.resources.iron >= 4) {
                            printf("You have %d iron \n,", x.resources.iron);
                            printf("Do you wish to trade 4 of it for 1 of any other resource? \n y for yes \n n for no \n");
                            fgets(line,MAX,stdin);
                            sscanf(line, " %c", &Trade_Confirm);
                            if(Trade_Confirm == 'y') {
                                printf("Which one do you wish to adquire? \n");
                                printf("w for wool \n");
                                printf("g for grain \n");
                                printf("l for lumber \n");
                                printf("b for brick \n");
                                fgets(line,MAX,stdin);
                                sscanf(line, " %c", &Trade41);

                                switch(Trade41)
                                            {
                                            /**
                                            * troca
                                            * incrementa o recurso escolhido
                                            * decrementando 4 de iron
                                            * */
                                            case 'w': x.resources.wool++; x.resources.iron-= 4; Mostrar(x); break;
                                            case 'g': x.resources.grain++; x.resources.iron-= 4; Mostrar(x); break;
                                            case 'l': x.resources.lumber++; x.resources.iron-= 4; Mostrar(x); break;
                                            case 'b': x.resources.brick++; x.resources.iron-= 4; Mostrar(x); break;
                                            case 'i': x.resources.iron++; x.resources.iron-= 4; Mostrar(x); break;
                                            }
                            }
                            /**
                             * confirmação da troca
                             * */
                            else if(Trade_Confirm == 'n') {
                                printf("You keep your resources as is then.");
                            }
                            /**
                            * mensagem de erro
                            * caso a resposta não corresponda
                            * às opções possíveis
                            * */
                            else {
                                printf("That doesn't answer my question\n!");
                                //trade4(a);
                                printf("that doesn't answer my question\n");
                                trade4(x);
                            }
                    }
                }
            }

/**
 *  troca por pontos de vitoria 10 por 1 
 * */
//troca por pontos de vitoria 10 por 1

            int trade10(PLAYER x) {
                /**
                * verifica se os recursos são >= que 10, se sim,
                * o jogador pode escolher se quer trocar esses 10
                * por 1 ponto de vitória
                * */
                if (x.resources.wool >= 10 || x.resources.grain >= 10 || x.resources.lumber >= 10 || x.resources.brick >= 10 || x.resources.iron >= 10) {
                    char Trade_Confirm;
                    /**
                     * troca de 10 de wool
                     * */
                    if (x.resources.wool >= 10) {
                        printf("You have %d wool \n,", x.resources.wool);
                        printf("Do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &Trade_Confirm);
                        if(Trade_Confirm == 'y') {
                            x.resources.wool -= 10;
                            x.victory_points++;
                            Mostrar(x);
                        }
                        else if(Trade_Confirm == 'n') {
                            printf("You keep your resources as is then.");
                        }
                        else {
                            printf("That doesn't answer my question\n!");
                            printf("that doesn't answer my question\n");
                            trade10(x);
                        }
                    }
                    /**
                     * troca de 10 de grain
                     * */
                    if (x.resources.grain >= 10) {
                        printf("You have %d grain \n", x.resources.grain);
                        printf("Do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &Trade_Confirm);
                        if(Trade_Confirm == 'y') {
                            x.resources.grain -= 10;
                            x.victory_points++;
                            Mostrar(x);
                        }
                        else if(Trade_Confirm == 'n') {
                            printf("You keep your resources as is then.");
                        }
                        else {
                            printf("That doesn't answer my question\n!");
                            printf("that doesn't answer my question\n");
                            trade10(x);
                        }
                    }
                    /**
                     * troca de 10 de lumber
                     * */
                    if (x.resources.lumber >= 10) {
                        printf("You have %d lumber \n", x.resources.lumber);
                        printf("Do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &Trade_Confirm);
                        if(Trade_Confirm == 'y') {
                            x.resources.lumber -= 10;
                            x.victory_points++;
                            Mostrar(x);
                        }
                        else if(Trade_Confirm == 'n') {
                            printf("You keep your resources as is then.");
                        }
                        else {
                            printf("That doesn't answer my question\n!");
                            printf("that doesn't answer my question\n");
                            trade10(x);
                        }
                    }
                    /**
                     * troca de 10 de brick
                     * */
                    if (x.resources.brick >= 10) {
                        printf("You have %d brick \n,", x.resources.brick);
                        printf("Do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &Trade_Confirm);
                        if(Trade_Confirm == 'y') {
                            x.resources.brick -= 10;
                            x.victory_points++;
                            Mostrar(x);
                        }
                        else if(Trade_Confirm == 'n') {
                            printf("You keep your resources as is then.");
                        }
                        else {
                            printf("That doesn't answer my question\n!");
                            printf("that doesn't answer my question\n");
                            trade10(x);
                        }
                    }
                    /**
                     * troca de 10 de iron
                     * */
                    if (x.resources.iron >= 10) {
                        printf("You have %d iron \n,", x.resources.iron);
                        printf("Do you wish to trade 10 of it for 1 victory point? \n y for yes \n n for no \n");
                        fgets(line,MAX,stdin);
                        sscanf(line, " %c", &Trade_Confirm);
                        if(Trade_Confirm == 'y') {
                            x.resources.iron -= 10;
                            x.victory_points++;
                            Mostrar(x);
                        }
                        else if(Trade_Confirm == 'n') {
                            printf("You keep your resources as is then.");
                        }
                        else {
                            printf("That doesn't answer my question\n!");
                            printf("that doesn't answer my question\n");
                            trade10(x);
                        }
                    }
                }
            }

/**
 * Comprar uma aldeia
 * */
            int buy_village(PLAYER x) {
                /**
                 * verifica se o jogador tem
                 * >= 1 de wool e >=1 de grain
                 * >= 1 de lumber e >=1 de brick
                 * se sim
                 * o jogador pode comprar uma aldeia 
                 * */
                if(x.resources.wool >= 1 && x.resources.grain >= 1 && x.resources.lumber >= 1 && x.resources.brick >= 1) {
                    char V_Choice;
                    printf("Wanna buy a village? \n y for yes \n n for no");
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
                        printf("Maybe next round then.");
                    }
                    else {
                        printf("That doesn't answer my question\n!");
                        printf("that doesn't answer my question\n");
                        buy_village(x);
                    }
                }
            }

/**
 * Comprar uma cidade
 * */

            int buy_city(PLAYER x) {
                /**
                 * verifica se o jogador tem
                 * >= 3 de iron e >=2 de grain
                 * e a casa for aldeia
                 * se sim
                 * o jogador pode comprar uma cidade 
                 * */
                if(x.resources.iron >= 3 && x.resources.grain >= 2 && x.territory.village >= 1) {
                        char C_Choice;
                        printf("Wanna buy a city? \n y for yes \n n for no");
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
                            printf("Maybe next round then.");
                        }
                        else {
                            printf("That doesn't answer my question\n!");
                            printf("that doesn't answer my question\n");
                            buy_city(x);
                        }
                }
            }



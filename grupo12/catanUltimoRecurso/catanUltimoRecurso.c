#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#include "player2.h"
#include "grelhaP.h"


int main()
{
	NODE node = {1,0};

	/**
	 * Inicializar a struct jogador
	 * */
	PLAYER a = {"",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,{0,0,0,0,0},{0,0},0};

	PLAYER b = {"",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,{0,0,0,0,0},{0,0},0};

	/**
	 * Pede nomes ao jogadores
	 * */
        printf("Player 1 please state your name:\n");
        gets(a.name);

        printf("Player 2 please state your name:\n");
        gets(b.name);

	/**
	 * Imprime a grelha
	 * */
        grelha();

        printf("chose a coordenate to begin in %s\n", a.name);
        pos(a);

        printf("chose a coordenate to begin in %s\n", b.name);
        pos(b);

	grelha();

	/**
	 * Loop principal com a ordem de jogo
	 * */

	while(a.victory_points <= 5 && b.victory_points <= 5)
    {
        char toss;
		int nRead;
		int Turn = 1;
        int dice1, dice2;
        turn(a, b, Turn);
        Turn++;
        printf("press enter to throw those dice\n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &toss);
        int roll = dice(dice1, dice2);
        switch(roll)
        {
            case 7: a.resources.wool++; Mostrar(a); break;
            case 9: a.resources.grain++; Mostrar(a); break;
            case 5: a.resources.lumber++; Mostrar(a); break;
            case 8: a.resources.brick++; Mostrar(a); break;
            case 2: a.resources.iron++; Mostrar(a); break;
            case 0: printf("Só há deserto nessa direção\n"); break;
            default : printf("\n"); break;
        }
		grelha();

        trade4(a);

        trade10(a);

        buy_city(a);

        buy_village(a);

        turn(a, b, Turn);
        Turn++;
        printf("press enter to throw those dice\n");
        fgets(line,MAX,stdin);
        sscanf(line, " %c", &toss);
        int roll2 = dice(dice1, dice2);
        switch(roll2)
        {
            case 7: b.resources.wool++; Mostrar(b); break;
            case 9: b.resources.grain++; Mostrar(b); break;
            case 5: b.resources.lumber++; Mostrar(b); break;
            case 8: b.resources.brick++; Mostrar(b); break;
            case 2: b.resources.iron++; Mostrar(b); break;
            case 0: printf("Só há deserto nessa direção\n"); break;
            default : printf("\n"); break;
        }
		grelha();

		trade4(b);

        trade10(b);

        buy_city(b);

        buy_village(b);
	}

    return 0;
}




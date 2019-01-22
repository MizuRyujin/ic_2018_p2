#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#include "player2.h"
#include "grelhaP.h"



int main()
{
	NODE node = {1,0};

	PLAYER a = {"",{0,0,0,0,0},{0,0},0};

	PLAYER b = {"",{0,0,0,0,0},{0,0},0};

        printf("Player 1 please state your name:\n");
        gets(a.name);

        printf("Player 2 please state your name:\n");
        gets(b.name);

	grelha();

	while(a.victory_points <= 5 && b.victory_points <= 5)
        {
		int * nRead = node.value;
		int Turn = 1;
        	int dice1, dice2;
        	turn(a, b, Turn);
        	Turn++;
        	int roll = dice(dice1, dice2);
        	switch(*nRead)
        	{
			case 'w': a.resources.wool++; Mostrar(a); break;
        	        case 'g': a.resources.grain++; Mostrar(a); break;
        	        case 'l': a.resources.lumber++; Mostrar(a); break;
        	        case 'b': a.resources.brick++; Mostrar(a); break;
        	        case 'i': a.resources.iron++; Mostrar(a); break;
        	        case 'd': printf("Só há deserto nessa direção\n"); break;
        	        default : printf("\n"); break;
        	}
		grelha();
	}

        printf("Pressione ENTER para sair...\n");
        getchar();

	return 0;
}

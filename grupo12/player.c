#include <stdio.h>
#include "player.h"
#define MAX 256
char line[MAX];
char Trade41[MAX];
char Trade10[MAX];

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

                case 'w': a.resources.wool+=10 ; Mostrar(a);
                case 'g': a.resources.grain++; Mostrar(a);
                case 'l': a.resources.lumber++; Mostrar(a);
                case 'b': a.resources.brick++; Mostrar(a);
                case 'i': a.resources.iron++; Mostrar(a); break;
                case 'd': printf("Só há deserto nessa direção\n"); break;
                default : printf("\n"); break;
                }

    //trade4(a, Trade41);
    trade10(a, Trade10);
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

    village_buy(a);

    city_buy(a);

    victory_points(a);
    Mostrar(a);
}

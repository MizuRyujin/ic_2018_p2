#include <stdio.h>
#include "player.h"

void Mostrar(PLAYER x)
{
	printf("Name		    : %s\n", x.name);
	printf("Resources	    : %d wool/%d grain/%d lumber/%d brick/%d iron\n", x.resources.wool, x.resources.grain, x.resources.lumber, x.resources.brick, x.resources.iron);
	printf("Territory	    : %d villages/%d citys\n", x.territory.village, x.territory.city);
	printf("victory points	: %d\n", x.victory_points);

}


int main()
{

	PLAYER a = {"",{0,0,0,0,0},{0,0},0};

	printf("Player1 please state your name:\n");

	gets(a.name);

	Mostrar(a);

	PLAYER b = {"",{0,0,0,0,0},{0,0},0};

	printf("Player2 please state your name:\n");

	gets(b.name);

	Mostrar(b);

	char Dice_p1;
	int Dice_p2;
	printf("que recurso aumenta player 1?");
	scanf("%c", &Dice_p1);

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

	printf("que recurso aumenta player 2?");
	scanf("%s", &Dice_p2);

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

    int Turn()
    {
        if(Turn_p1 = 1) {
            printf("%s", a.name);
        }
        else if(Turn_p2 = 1) {
            printf("%s", b.name);
        }
    }

}




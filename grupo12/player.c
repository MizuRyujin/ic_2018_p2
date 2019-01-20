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

	//turn(a, b, Turn); <- como chamar função turnos

	char Dice_p1;
	char Dice_p2;
	printf("que recurso aumenta player 1?");
	fgets(line,MAX,stdin);
	sscanf(line, " %c", &Dice_p1);

	switch(Dice_p1)
                {

                case 'w': a.resources.wool+= 10; Mostrar(a); break;
                case 'g': a.resources.grain++; Mostrar(a); break;
                case 'l': a.resources.lumber++; Mostrar(a); break;
                case 'b': a.resources.brick++; Mostrar(a); break;
                case 'i': a.resources.iron++; Mostrar(a); break;
                case 'd': printf("Só há deserto nessa direção\n"); break;
                default : printf("\n"); break;
                }

    //trade4(a, Trade41);
    trade10(a, Trade10);

	printf("que recurso aumenta player 2?");

	fgets(line,MAX,stdin);
	sscanf(line, " %c", &Dice_p2);

    switch(Dice_p2)
                {

                case 'w': b.resources.wool+=4; Mostrar(b); break;
                case 'g': b.resources.grain++; Mostrar(b); break;
                case 'l': b.resources.lumber++; Mostrar(b); break;
                case 'b': b.resources.brick++; Mostrar(b); break;
                case 'i': b.resources.iron++; Mostrar(b); break;
                case 'd': printf("Só há deserto nessa direção\n"); break;
                default : printf("\n"); break;
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
                printf("that doesn't answer my question");
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
                printf("that doesn't answer my question");
            }
        }
}




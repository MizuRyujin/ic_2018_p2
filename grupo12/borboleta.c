#include <stdio.h>
//#include "player.h"
//#include "borboleta.h"

#define MAX 125

char map [MAX][MAX];
int north = 1;
int south = 1;
int east = 1;
int west = 1;
char village = 1;
char city = 1;
char player = 1;

int main()
{

    map[0][35] = "|---------|\n";
    map[1][35] = "|N=%s|\n",north;
    map[2][35] = "|S=%s|\n",south;
    map[3][35] = "|E=%s|\n",east;
    map[4][35] = "|W=%s|\n",west;
    map[5][35] = "|V=%c|\n",village;
    map[6][35] = "|C=%c|\n",city;
    map[7][35] = "|Player=%c|\n",player;
    map[8][35] = "|---------|";

    char *ptr1 = &map[MAX][MAX];

    //for(int y=0; y < MAX; y++)
    //{
    //    for(int x=0; x < MAX; x++)
    //    {
    //        printf("%c", map[x][y]);
    //    }
    //}

    printf("%c", *ptr1);
return 0;
}
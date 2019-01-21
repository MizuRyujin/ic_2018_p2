#include <stdio.h>
#include <string.h>

const char grlh[128][128];
const char *grlha;
grlha = grlh;

malloc(sizeof(grlh));

int main()
{
	strcpy(grlha, "hello world");

	printf(" %c", *grlha);

	return 0;
}

CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99 -g -Doff64_t=__off64_t
LDFLAGS=
LDLIBS=

PROGRAM=catanSimples
MAPA=criarGrid

$(PROGRAM): $(PROGRAM).o $(MAPA).o catanSimples.o Mapa.o player.o abrirINI.o

$(PROGRAM).o: $(PROGRAM).c player.h Mapa.h abrirINI.h

$(MAPA).o: $(MAPA).c player.h Mapa.h abrirINI.h

Mapa.o: criarGrid.c criarGrid.h Mapa.c abrirINI.c Mapa.h

player.o: player.c player.h

.PHONY: clean
clean:
	rm -f $(PROGRAM) *.o

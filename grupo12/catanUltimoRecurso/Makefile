CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99 -g -Doff64_t=__off64_t
LDFLAGS=
LDLIBS=

PROGRAM=catanUltimoRecurso
MAPA=grelhaP

$(PROGRAM): $(PROGRAM).o $(MAPA).o catanUltimoRecurso.o grelhaP.o player2.o

$(PROGRAM).o: $(PROGRAM).c player2.h grelhaP.h

$(MAPA).o: $(MAPA).c player2.h grelhaP.h

Mapa.o: grelhaP.c grelhaP.h

player2.o: player2.c player2.h

.PHONY: clean
clean:
	rm -f $(PROGRAM) *.o

#Arquivo makefile para compilar todos os arquivos .cpp e linkar todos os arquivos .o


PROG = geometria
CC = g++
CPPFLAGS = -O0 -g –Wall -pedantic
OBJS = main.o area.o calcarea.o perimetro.o calcperimetro.o volume.o calcvolume.o 

$(PROG) : $(OBJS)$(CC) $(LDFLAGS)-o $(PROG) $(OBJS)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

calcarea.o : calcarea.h
	$(CC) $(CPPFLAGS) -c calcarea.cpp

area.o : area.h
	$(CC) $(CPPFLAGS) -c area.cpp

calcperimetro.o : calcperimetro.h
	$(CC) $(CPPFLAGS) -c calcperimetro.cpp

perimetro.o : perimetro.h
	$(CC) $(CPPFLAGS) -c perimetro.cpp

calcvolume.o : calcvolume.h
	$(CC) $(CPPFLAGS) -c calcvolume.cpp

volume.o : volume.h
	$(CC) $(CPPFLAGS) -c volume.cpp

clean:
	rm -f core $(PROG)$(OBJS)

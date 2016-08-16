PROG = geometria
CC = g++
CPPFLAGS = -O0 -g –Wall -pedantic
OBJS = main.o area.o calcarea.o perimetro.o calcperimetro.o volume.o calcvolume.o
$(PROG) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)
	
main.o :
	$(CC) $(CPPFLAGS) -c main.cpp
	
area.o : area.h
	$(CC) $(CPPFLAGS) -c area.cpp

calcarea.o : calcarea.h
	$(CC) $(CPPFLAGS) -c calcarea.cpp
	
perimetro.o : perimetro.h
	$(CC) $(CPPFLAGS) -c perimetro.cpp
	
calcperimetro.o : calcperimentro.h
	$(CC) $(CPPFLAGS) -c calcperimetro.cpp
	
volume.o : volume.h
	$(CC) $(CPPFLAGS) -c volume.cpp
	
calcvolume.o : calcvolume.h
	$(CC) $(CPPFLAGS) -c calcvolume.cpp
	
clean:
	rm -f core $(PROG) $(OBJS)
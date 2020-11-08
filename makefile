CC=gcc
AR=ar
FLAGS=-Wall -g
OBJECTS_MAIN=main.o

all: myMath.so myMath.a mains maind

mymaths: myMath.a

mymathd: myMath.so

mains: $(OBJECTS_MAIN) myMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) myMath.a
	
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./myMath.so
	
myMath.so: power.o basicMath.o
	$(CC) -shared -o myMath.so basicMath.o power.o
	
myMath.a: power.o basicMath.o
	$(AR) -rcs myMath.a basicMath.o power.o
	
main.o: main.c myMath.h               
	$(CC) $(FLAGS) -c main.c

basicMath.o: basicMath.c myMath.h     
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c myMath.h             
	$(CC) $(FLAGS) -c power.c
	
clean:
	rm -f *.o *.a *.so mains maind

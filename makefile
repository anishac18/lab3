L3: lab3Main.o iterativeFibonacci.o recursiveFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o  
	gcc -Wall -std=c99 lab3Main.o iterativeFibonacci.o recursiveFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o -o L3
lab3Main.o: lab3Main.c lab3.h 
	gcc -Wall -std=c99 -c lab3Main.c
iterativeFibonacci.o: iterativeFibonacci.c lab3.h
	gcc -Wall -std=c99 -c iterativeFibonacci.c
recursiveFibonacci.o: recursiveFibonacci.c lab3.h
	gcc -Wall -std=c99 -c recursiveFibonacci.c
iterativeSumNOdd.o: iterativeSumNOdd.c lab3.h
	gcc -Wall -std=c99 -c iterativeSumNOdd.c 
recursiveSumNOdd.o: recursiveSumNOdd.c lab3.h
	gcc -Wall -std=c99 -c recursiveSumNOdd.c
clean:
	rm *.o L3
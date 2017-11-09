driver.out: perceptron.o
	g++ driver.cpp perceptron.o -o driver.out -Wall

perceptron.o: perceptron.h

clean:
	rm driver.out *.o *~

run:
	./driver.out

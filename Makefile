all:
	g++ main.cpp -o output

run: all
	./output

clean:
	rm output
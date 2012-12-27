
# This makefile will generate each target from a cpp file with the same name

CC=g++
FLAGS=
TARGETS=factorial

all: $(TARGETS)

%: %.cpp
	$(CC) $? -o $@ $(FLAGS)

clean:
	rm -f $(TARGETS) *.o

CC = g++
FLAGS = -Wall -std=c++17
FILE = mytar
HEADER = tar
TARGET = mytar
TARFILE = test.tar

all: dep create
	$(CC) $(FLAGS) -o $(TARGET) $(FILE).o $(HEADER).o

dep:
	$(CC) $(FLAGS) -c $(HEADER).cpp
	$(CC) $(FLAGS) -c $(FILE).cpp

create:
	@rsync -a --exclude=*.pdf . a/   
	@tar -cf $(TARFILE) a/
	@rm -rf a/

clean:
	rm -f *.o $(TARGET) $(TARFILE)
	
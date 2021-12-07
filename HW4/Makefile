CC = g++
CFLAGS = -std=c++17 -c -Wall -O2
SOURCES = main.cpp lexer.cpp
SOURCES += token.cpp word.cpp type.cpp num.cpp real.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXE = scan

all: $(SOURCES) $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

dep:
	$(CC) -M *.cpp > .depend

clean:
	rm -f $(OBJECTS) $(EXE) .depend

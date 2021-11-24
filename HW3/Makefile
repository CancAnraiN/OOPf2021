CXX = g++
CXXFLAGS = -std=c++17

TARGET = main
HEADF = complex
OUT = a

all: dep
	$(CXX) $(CXXFLAGS) -o $(OUT) $(TARGET).o $(HEADF).o

dep:
	$(CXX) $(CXXFLAGS) -c $(HEADF).cpp
	$(CXX) $(CXXFLAGS) -c $(TARGET).cpp

.PHONY: clean
clean:
	@rm $(OUT) *.o
	@echo clean done

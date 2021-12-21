CXX = g++
CXXFLAGS = -std=c++17

TARGET1 = test1
TARGET2 = test2
HEADF = Trace
OUT1 = a
OUT2 = b

all: dep
	$(CXX) $(CXXFLAGS) -o $(OUT1) $(TARGET1).o
	$(CXX) $(CXXFLAGS) -o $(OUT2) $(TARGET2).o $(HEADF).o

dep:
	$(CXX) $(CXXFLAGS) -c part2/$(HEADF).cpp
	$(CXX) $(CXXFLAGS) -c part1/$(TARGET1).cpp
	$(CXX) $(CXXFLAGS) -c part2/$(TARGET2).cpp

.PHONY: clean
clean:
	@rm $(OUT1) $(OUT2) *.o
	@echo clean done

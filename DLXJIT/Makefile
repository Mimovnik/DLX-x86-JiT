CXX = g++
CXXFLAGS = -g -std=c++11 -O2 -m64 -DARCH_X64 -fpermissive
LDFLAGS = 

SOURCES = main.cpp DLXJIT.cpp DLXJITx64.cpp DLXJITException.cpp DLXTextInstruction.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = dlxjit

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) $(LDFLAGS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
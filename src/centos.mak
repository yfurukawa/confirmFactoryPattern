CC = g++
INCLUDE = -I /usr/incude
LIB = -L /usr/lib
OPT = -O0 -g3 -pg -fprofile-arcs -ftest-coverage -Wall -fmessage-length=0

TARGET = confirmFactory

SRC = main.cpp Conductor.cpp DriverFactory.cpp DriverFactoryCentOS.cpp \
LEDDriver.cpp LEDDriverCentOS.cpp 

all: $(SRC)
	$(CC) $(INCLUDE) $(LIB) $(OPT) -o $(TARGET) $(SRC)

clean:
	$(RM) *.o $(TARGET) gmon.out *.gc* *.xml *.exe

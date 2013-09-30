CC = g++
INCLUDE = -I /usr/incude
LIB = -L /usr/lib
OPT = -O0 -g3 -Wall -fmessage-length=0

TARGET = confirmFactoryFreeBSD

SRC = main.cpp Conductor.cpp DriverFactory.cpp DriverFactoryFreeBSD.cpp \
LEDDriver.cpp LEDDriverFreeBSD.cpp 

all: $(SRC)
	$(CC) $(INCLUDE) $(LIB) $(OPT) -o $(TARGET) $(SRC)

clean:
	$(RM) *.o $(TARGET) gmon.out *.gc* *.xml *.exe

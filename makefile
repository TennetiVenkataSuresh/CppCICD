CC = g++
INCLUDES_DIR = includes
SOURCES_DIR = srcs
OBJECTS_DIR = objs
CPPFLAGS = -g
LIBS = -lcppunit

testBasicMath : TestBasicMath.o CBasicMath.o testMain.o
	$(CC) -o $@ TestBasicMath.o CBasicMath.o testMain.o $(LIBS)

TestBasicMath.o : TestBasicMath.cpp
	$(CC) -c TestBasicMath.cpp

CBasicMath.o : CBasicMath.cpp
	$(CC) -c CBasicMath.cpp

testMain.o : testMain.cpp
	$(CC) -c testMain.cpp

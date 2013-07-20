CC=g++
CFLAGS=

test: 
	$(CC) -o run_tests CppUnitLite/Main.cpp CppUnitLite/Failure.cpp CppUnitLite/Test.cpp CppUnitLite/TestRegistry.cpp CppUnitLite/TestResult.cpp CppUnitLite/VectorGraphicTest.cpp point.cpp vector_graphic.cpp

vector_graphic:
	$(CC) -o vector_graphic point.cpp vector_graphic.cpp main.cpp

all:
	$(CC) -o run_tests CppUnitLite/Main.cpp CppUnitLite/Failure.cpp CppUnitLite/Test.cpp CppUnitLite/TestRegistry.cpp CppUnitLite/TestResult.cpp CppUnitLite/VectorGraphicTest.cpp point.cpp vector_graphic.cpp
	$(CC) -o vector_graphic point.cpp vector_graphic.cpp main.cpp

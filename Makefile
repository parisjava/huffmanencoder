CXXFLAGS = -std=c++11 -Wall -Wextra -Wpedantic -O2 -g

compress: main.o encode.o input.o
	g++ $(CXXFLAGS) -o compress main.o encode.o input.o

main.o: main.cpp encode.hpp
	g++ $(CXXFLAGS) -o main.o -c main.cpp

encode.o: encode.cpp encode.hpp
	g++ $(CXXFLAGS) -o encode.o -c encode.cpp

input.o: input.cpp input.hpp
	g++ $(CXXFLAGS) -o input.o -c input.cpp

clean:
	rm *.o compress

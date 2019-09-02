ME = mp_intro

CXX = clang++
CXXFLAGS = $(CS225) -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lm

all: $(EXENAME)

main.o: main.cpp intro.h cs225/PNG.H cs225/HSLAPixel.h
        $(CXX) $(CXXFLAGS) main.cpp

intro.o: intro.cpp intro.h
        $(CXX) $(CXXFLAGS) intro.cpp

HSLAPixel.o : cs225/HSLAPixel.cpp cs225/HSLAPixel.h
        $(CXX) $(CXXFLAGS) cs225/HSLAPixel.cpp

PNG.o : cs225/PNG.cpp cs225/PNG.h cs225/HSLAPixel.h cs225/lodepng/lodepng.h
        $(CXX) $(CXXFLAGS) cs225/PNG.cpp

lodepng.o : cs225/lodepng/lodepng.cpp cs225/lodepng/lodepng.h
       $(CXX) $(CXXFLAGS) cs225/lodepng/lodepng.cpp

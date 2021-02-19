# Makefile

# Compiler
CXX ?= g++

# Compiler flags
CXXFLAGS ?= --std=c++11 -Wall -Werror -pedantic -g

processing.exe: Matrix.cpp Image.cpp text_to_bitmap.cpp processing.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

conversion_tests.exe: Matrix.cpp Image.cpp text_to_bitmap.cpp conversion_tests.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# Disable built-in Makefile rules
.SUFFIXES:

clean:
	rm -rvf *.exe *.out.txt *.out.ppm *.dSYM *.stackdump
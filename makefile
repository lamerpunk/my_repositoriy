# Specify the compiler
CXX = g++

# Specify the source files
SOURCES = main.cpp utils.cpp

# Specify the header file
HEADER = utils.h

# Specify the output executable
TARGET = myprogram

# Specify the compiler flags
CXXFLAGS = -Wall -Wextra -std=c++20

# Specify the build target
all: $(TARGET)

# Compile the source files into an executable
$(TARGET): $(SOURCES) $(HEADER)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

# Clean up the build files
clean:
	rm -f $(TARGET)

GTEST_INCLUDE_DIRS = /usr/include
GTEST_LIBRARY_DIRS = /usr/lib
GTEST_LIBRARIES = -lgtest -lgtest_main

CXXFLAGS += -I$(GTEST_INCLUDE_DIRS)
LDFLAGS += -L$(GTEST_LIBRARY_DIRS) -Wl,-rpath,$(GTEST_LIBRARY_DIRS)
LDLIBS += $(GTEST_LIBRARIES)

all: test
test: test.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o test test.o $(LDLIBS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o test test.cpp $(LDLIBS)
	./test

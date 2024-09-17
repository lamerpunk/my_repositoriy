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
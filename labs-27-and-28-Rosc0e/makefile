# Makefile

CC = clang++
CFLAGS = -Wall -Werror
SOURCES = main.cpp DogRecord.cpp BirdRecord.cpp PetRecord.cpp CatRecord.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = pet_records

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
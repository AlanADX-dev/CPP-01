CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

all: $(NAME)

$(NAME): *.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(NAME)
	rm -f *.o

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

all: $(NAME)

$(NAME): Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

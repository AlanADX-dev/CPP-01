CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = test

SRCS = *.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	c++ $(FLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

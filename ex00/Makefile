NAME = Animal

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I ./includes

CXX = c++

SRCS = srcs/Animal.cpp srcs/main.cpp srcs/Cat.cpp srcs/Dog.cpp srcs/WrongAnimal.cpp srcs/WrongCat.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME} 

re : fclean all

.PHONY : all clean fclean re
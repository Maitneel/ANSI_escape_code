NAME := a.out
CC  := cc

SRCS := main.c \
		test.c \

OBJS := ${SRCS:%.c=%.o}

INCLUDE := ..

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${OBJS} -I ${INCLUDE} -o ${NAME}

%.o : %.c
	${CC} -c -I ${INCLUDE} $^ -o $@

clean : 
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
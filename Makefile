NAME := a.out
CC  := cc

SRCS := test.c \

OBJS := ${SRCS:%.c=%.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${OBJS} -o ${NAME}

%.o : %.c
	${CC} -c $^ -o $@

clean : 
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
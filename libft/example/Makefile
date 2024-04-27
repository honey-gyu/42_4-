NAME = libft.a // 최종적으로 만드러진 라이브러리 이름

CC = gcc // 컴파일 명령어
CFLAGS = -Wall -Wextra -Werror // 명령어 옵션

RM = rm -f // 제거 명령어

AR = ar // 아카이브 파일로 압축하는 명령어
ARFLAGS = crs // AR 명령어 옵션

INCLUDES = ./libft.h // 헤더파일 매크

SRCS = \ // .C 파일들 모음
       ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o) // SRCS의 .C 파일들을 .O로 바꾼다.

all : $(NAME) // NAME을 불러오는 타겟

$(NAME): $(OBJS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean: // 생성된 오브젝트 파일을 삭제
	$(RM) $(OBJS) // 삭제 명렁어 + 오브젝트 파일

fclean: clean // 생성된 오브젝트 파일과 라이브러리 파일 삭제
	$(RM) $(NAME) // 삭제 명령어 + 라이브러리 파일

re: clean all // fclean 타겟(clena 포함) + all 타겟을 순차적으로 진행

.PHONY: all clean fclean re // all, c로lean, fclean, re를 타겟으로 인식

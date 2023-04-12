CC=gcc
STDFLAGS=-std=c11 -Wall -Werror -Wextra 
TEST_CFLAGS= -g $(STDFLAGS) #-fsanitize=address
GCOV_FLAGS=-fprofile-arcs -ftest-coverage
LINUX_FLAGS=-lpthread -lcheck -pthread -lrt -lm
LIBS=-lcheck
VALGRIND_FLAGS=--trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all --verbose

TARGET=s21_string.a
TEST_TARGET = test_string.a
SRC=$(wildcard s21_*.c)
OBJ=$(patsubst %.c,%.o, ${SRC})
# HEADER=$(wildcard s21_*.h)

PREF_TEST_SRC=./unit_tests/
TEST_SRC=$(wildcard $(PREF_TEST_SRC)/s21_*.c)
# TEST_OBJ = $(patsubst %.c,%.o, ${TEST_SRC})

NEW_TEST_SRC=$(wildcard ./tests/*.c)
NEW_TEST_OBJ=$(patsubst ./tests/%.c, %.o, $(NEW_TEST_SRC))

OS := $(shell uname -s)
USERNAME=$(shell whoami)

ifeq ($(OS),Linux)
  OPEN_CMD = xdg-open
endif
ifeq ($(OS),Darwin)
	OPEN_CMD = open
endif

all: clean $(TARGET) test

$(TARGET): ${SRC}
	$(CC) -c $(STDFLAGS) $(SRC)
	ar rcs  $@ $(OBJ)
# ranlib $@
# cp $@ lib$@

test: $(TARGET) 
ifeq ($(OS), Darwin)
	${CC} $(STDFLAGS) ${NEW_TEST_SRC} $(TARGET) -o lib_test $(LIBS)
else
	${CC} $(STDFLAGS) ${NEW_TEST_SRC} $(TARGET) -o lib_test $(LIBS) $(LINUX_FLAGS)
endif
	./lib_test


gcov_report: clean_test
ifeq ($(OS), Darwin)
	$(CC) $(STDFLAGS) $(GCOV_FLAGS)  ${NEW_TEST_SRC} ${SRC} -o test $(LIBS)
else
	$(CC) $(STDFLAGS) $(GCOV_FLAGS)  ${NEW_TEST_SRC} ${SRC} -o test $(LIBS) $(LINUX_FLAGS)
endif
	./test
	lcov -t "stest" -o s21_test.info -c -d .
	genhtml -o report s21_test.info
	$(OPEN_CMD) ./report/index.html

valgrind: $(TARGET)
	$(CC) $(TEST_CFLAGS) ${TEST_SRC} $< -o test $(LIBS) $(LINUX_FLAGS)
	CK_FORK=no valgrind $(VALGRIND_FLAGS) --log-file=RESULT_VALGRIND.txt ./lib_test

clang:
	clang-format -style=Google -n *.c *.h */*.c */*.h

leaks:
	CK_FORK=no leaks --atExit -- ./lib_test

brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh

lcov:
ifeq ($(OS),Linux)
	sudo apt install lcov
endif
ifeq ($(OS),Darwin)
	brew install lcov
endif

clean_obj:
	rm -rf *.o

clean_lib: 
	rm -rf *.a

clean_test:
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.info
	rm -rf test
	rm -rf report

clean: clean_lib clean_lib clean_test clean_obj
	rm -rf lib_test
	rm -rf unit_test
	rm -rf RESULT_VALGRIND.txt

.PHONY: all clean check lcov

FLAGS = -Wall -Wextra -Werror -pedantic -ggdb
FILES = heap.c

heap: $(FILES)
	gcc $(FLAGS) -o heap $(FILES)

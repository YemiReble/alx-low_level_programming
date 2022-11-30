# C Main.c File
The files contained in this sub-folder contains the file that can be use for testing.

* 0-main.c
* 1-main.c
* 2-main.c
* 3-main.c
* 4-main.c
* 5-main.c
* 6-main.c
* 7-main.c
* 8-main.c
* 9-main.c
* 10-main.c

While some files were not well arranged as a result of Auto-indentation, they work.

Bellow are the compilation process as the code were compiled using GCC compiler.

## Complilation Proccess
### GCC

0. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
	More singly linked lists$ valgrind ./f

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
	More singly linked lists$ valgrind ./g

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j

1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
	More singly linked lists$ valgrind ./k

**Have Fun! Looking Arround**

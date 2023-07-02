# 0x12. C - Singly linked lists


## Resources

## Read or watch:


- Linked Lists
- Google
- Youtube
- Learning Objectives
- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General


- When and why using linked lists vs arrays
- How to build and use linked listsResources


## Requirements


## General


- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using `betty-style.pl and betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… are forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

More Info
Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


## Tasks


0. [Print list : A function that prints all the elements of a list_t list.](https://github.com/elieelijah/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c)
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes.
Format:
 julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
 julien@ubuntu:~/0x12. Singly linked lists$ ./a
 [5] Hello
 [5] World
 -> 2 elements

 [0] (nil)
 [5] World
 -> 2 elements
 julien@ubuntu:~/0x12. Singly linked lists$
If str is NULL, print [0] (nil)
You are allowed to use printf.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-print_list.c -o a
1. List length : A function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-list_len.c -o b
2. Add node : A function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed.
str needs to be duplicated.
You are allowed to use strdup.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-add_node.c 0-print_list.c -o c
3. Add node at the end : A function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed.
str needs to be duplicated.
You are allowed to use strdup.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/3-main.c 3-add_node_end.c 0-print_list.c -o d
4. Free list : A function that frees a list_t list.
Prototype: void free_list(list_t *head);
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
img

5. The Hare and the Tortoise : A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
You are allowed to use the printf function.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/100-main.c 100-first.c -o first
6. Real programmers can write assembly code in any language : A 64-bit program in assembly that prints Hello, Holberton followed by a new line.
You are only allowed to use printf function.
You are not allowed to use interrupts.
Your program will be compiled using nasm and gcc this way: nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello

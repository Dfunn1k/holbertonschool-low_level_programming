<p align="center">
<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="200px" width="700px">
</p>

# 0x06. C - More pointers, arrays and strings

## Learning Objectives

* When and why using linked lists vs arrays
* How to build and use linked lists

## Requirementes

*  Allowed editors: `vi`, `vim`, `emacs`
*  All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
*  All your files should end with a new line
*  A `README.md` file, at the root of the folder of the project is mandatory
*  Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
*  You are not allowed to use global variables
*  No more than 5 functions per file
*  The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
*  You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
*  You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
*  In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
*  The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
*  Don’t forget to push your header file.
*  All your header files should be include guarded.

### Please use this data structure for this project:

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

#
## Tasks

#

### 0-print_list.c
Prints all the elements of a `list_t` list.
- Prototype: `size_t print_list(const list_t *h);`.
- Return: the number of nodes.
- Format: see example.
- If `str` is `NULL`, print `[0] (nil)`.
- You are allowed to use `printf`.

### 1-list_len.c
Returns the number of elements in a linked `list_t` list.
- Prototype: `size_t list_len(const list_t *h);`.

### 2-add_node.c
Adds a new node at the beginning of a `list_t` list.
- Prototype: `list_t *add_node(list_t **head, const char *str);`.
- Return: the address of the new element, or `NULL` if it failed.
- `str` needs to be duplicated.
- You are allowed to use `strdup`.

### 3-add_node_end.c
Adds a new node at the end of a `list_t` list.
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`.
- Return: the address of the new element, or `NULL` if it failed.
- `str` needs to be duplicated.
- You are allowed to use `strdup`.

### 4-free_list.c
Frees a list_t list.
- Prototype: `void free_list(list_t *head);`.

### 100-first.c
Prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
- Uses the printf function.

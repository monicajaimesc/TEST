#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h> /* For dynamic memory*/
#include <stdio.h> /* Macros */
#include <sys/types.h> /*System calls */
#include <sys/stat.h>
#include <fcntl.h> /* POSIX */
#include <string.h>
#include <limits.h> /*Limits for the macros */
#include <stdarg.h> /*allows to accept and indefinite # of arguments*/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer.
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void error_cases(int error_type, ...);
void free_stack (void);
stack_t get_node (int n);


#endif /* MONTY_H */

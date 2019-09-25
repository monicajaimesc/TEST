#include "monty.h"
/**
 * error_cases - Handle all the error cases
 *@error_type: Index number of the error
 * Return: Nothing
 */
void error_cases(int error_type, ...)
{
	va_list list_arguments;
	char *op_code;
	int l_number; /* Line number*/

	va_start(list_arguments, error_type);

	switch (error_type)
	{
		case '1':
			printf("L%d: usage: push integer\n", va_arg(list_arguments, int));
			break; /* If the argument passed is not an int or no argument passed*/

		case '2':
			printf("L%d: can't pint, stack empty\n", va_arg(list_arguments, int));
			break; /* Stack is empty for pint*/

		case '3':
			printf("L%d: can't pop an empty stack\n", va_arg(list_arguments, int));
			break; /* Stack is empty for the pop*/
		case '4':
			l_number = va_arg(list_arguments, unsigned int);
			op_code = va_arg(list_arguments, char *)
			printf("L%d: can't %s stack too short\n", l_number, op_code);
			break; /* Stack too short for operations*/

	}
	/* falta free nodes*/
	exit(EXIT_FAILURE);
}





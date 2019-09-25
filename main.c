#include "monty.h"

int main (int argc, char **argv)
{
	size_t number; /*integer type*/
	/* Execute: Needed for the stack flow */
	void (*execute)(stack_t **stack, unsigned int line_number);
/* different of 2 because to be able to execute the program */
	if (argc != 2)
/*Errors-cases function */
    	error_cases(1);
/* Building stack structure */
	open_file(argv[1]);

	bilding_stack_flow();


	open_file(argv[1]);
	free_stack();
	return (0);
}



/*CUANDO NO SEA UN ENTERO */
/*CUANDO SEA VACIO*/

fflush(stdin);
/*2. handle command lines with arguments*/
	/*reads an entire line from stream, store it in bufsize and thext is stdin*/
/*buf = address, &bufsize = stores address*/

		characters = getline (&buf, &bufsize, stdin);
/*getline was no succesfull, function failed*/
		if (characters == -1)/*condition of getline NULL -1*/
		{
			perror ("input don't read it");
			free(buf);
			exit(-1);/*indicates that something has gone amiss*/
		}
/*getline was sucesfull, return number of characters read,delimiterS and null*/
	return (buf);
}

/* Get file name */

/* open a file */



/* read each line of opcode in the flile  */


/* LOOP */


/* parse the line, fit fails, got to the next line in the file */

/* find the right instructions */
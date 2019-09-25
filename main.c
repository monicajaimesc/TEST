#include "monty.h"

int main (int argc, char **argv)

size_t n;
void (*f)(stack_t **stack, unsigned int line_number);

if (argc != 2)
    error_cases;
open_file;

/* Built the global structure */

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
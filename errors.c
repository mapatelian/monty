#include "monty.h"

int usagefailure(void) /* add to header */
{
	fprintf(stderr, "USAGE: monnty file\n");
	exit(EXIT_FAILURE);
}

int cannotopen(char *nameofthefile) /* add to header */
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}

int unknowninstruct(char *opcode, int linenum) /* add to header */
{
	fprintf(stderr, "L%i: unknown instruction %s\n", linenum, opcode);
	exit(EXIT_FAILURE);
}

int cannotmalloc(void) /* add to header */
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
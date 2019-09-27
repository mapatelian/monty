#include "monty.h"

void readmenow(void)
{
	size_t line_buf_size = 0, linecount = 0;
	int linesize;

	while(1)
	{
		linesize = getline(&myglobal.linebyline, &line_buf_size, myglobal.input)
		linecount++;

		parsemenow(linebyline); /* add to header */ /* FREEEEEEEE */
	}
}

void parsemenow(char *line)
{

}
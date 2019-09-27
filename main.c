#include "monty.h"

global_t myglobal = {NULL, NULL};

int main(ac, **av)
{
	if (ac != 2)
	{
		usagefailure();
	}

	myglobal.input = fopen(av[1], "r");

	if (!myglobal.input)
	{
		cannotopen(av[1]);
	}

	myglobal.filename = av[1];
	readmenow(); /* add to header */




}
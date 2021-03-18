#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int n, from, dest;


	
    if(argc == 1)// no arguments given
    {
    	n = 3;
		from = 1;
		dest = 2;
			
    }


    if(argc == 2)// 1 argument given
    {
    	n = atoi (argv[1]);
		from = 1;
		dest = 2;
		
    }

    if(argc == 4)// 3 arguments given 
	{    
		n = atoi (argv[1]);
		from = atoi (argv[2]);
		dest = atoi (argv[3]);
	
		
		if (from == dest)//two IDs must be different
		{
			fprintf (stderr, "Cannot have from and dest values equal to eachother");
			exit (1);
		}
	
		
    }

	if (n <  0 || from <= 0 || from > 3 || dest > 3  || dest <= 0)
	{
		fprintf (stderr, "Cannot have negative values for n. Must be a positve number! From and dest cannot be less than equal to zero or be greater than 3");
		exit (1);
	}
    /* argc refers to the number of arguments passed. For this lab there are 3 requirements, there are no arguments (argc == 1) , one argument (argc == 2) , and 3 			arguments(argc == 4) . There cannot be negative arguments, 2 arguments or more than 3 arguments. therefore !(argc < 1) , argc!=3 or !(argc > 4) 
	*/


    
    towers(n, from, dest);
    exit(0);
}

#include<stdio.h>
void main(int argn, char *args[])
{
	FILE *fp;
	fp = fopen("wot.txt", "a");
	if(argn>2)
	{
		fprintf(fp, "***** %s ****\n" ,args[1]);
		for(int i=2; i<argn; i++)
			{
				if(i%10==0) fprintf(fp, "\n");
					fprintf(fp,"%s ", args[i]);
			}
		fprintf(fp, "\n---------------------------------------------------------------------------------------------------------------------------\n");
	
	}
	//fclose(fp);
}

/*Line 1 : We are including stdio.h library to make of use of the functions in that library to write, compile and execute the code.
Line 2 : We are declaring the main function with return type void. Because we are not expecting the program to return any value during or after the execution.
Also we are informing the compiler that we will pass some command line arguments (to main function) from
the terminal/command prompt, by writing argn and argc[] as arguments to the main function. 'argn' refers to the number of command line arguments entered. 
argv is array of pointers listing all the arguments. Example ; argc[i] contains the pointer to the i'th string(command line argment).
line 3 : We are */
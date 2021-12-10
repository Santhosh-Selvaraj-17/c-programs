#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isprime(int i)
{	
	int count=0;

	for(int k=1;k<i;k++)
		{	
			
			if(i%k==0) count++;
			if(count>1) break;


		}
		
		int v;
		if(count>1) v = 1;
		else v = 0;
		return v;

}
main(int argn,char *args[])
{
		char *ptr;
		int p = strtol(args[1], &ptr, 10 );

		if(isprime(p)==1) printf("\nComposite");
		else printf("\nPrime");






}
#include<stdio.h>

main()
{

int a,b,n,count;

printf("enter the value of a");

scanf("%d",&a);

printf("The list of all primes under %d",n);
count=0;
	
for(b=2;b<a;b++) {if(a%b==0) {count++;}}
	

if(count==0){printf("\n%d is prime",a);} 
if(count>0){printf("%d is composite",a);}
	



}

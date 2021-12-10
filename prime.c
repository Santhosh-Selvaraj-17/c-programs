#include<stdio.h>

main()
{
FILE *fp;
FILE *kp;
fp = fopen("noncomp.txt","a");
kp = fopen("comp.txt","a");
int a,b,n,count;

printf("enter the value of n");
scanf("%d",&n);


for(a=1;a<n;a++)
{	count=0;
	for(b=2;b<a;b++)
		{
		if(a%b==0) {count++;}
		}
	if(count==0){fprintf(fp,"\n%d",a);}
if(count>0){fprintf(kp,"\n%d",a);}
		
}
	

fclose(fp);
fclose(kp);
printf("Please go and check the files named comp.txt and noncomp.txt ");

}

#include<stdio.h>
#include<string.h>
#include<conio.h>

main()

{

char str[100], T;
int i,r;
printf("Enter the string to be reverses - ");
scanf("%s", &str);

r = strlen(str)-1;

for(i =0 ;i<r; i++)
{
T = str[i];
str[i] = str[r];
str[r] = T;
r = r-1;
}

printf(" \nThe reversed string is - %s",str);

}
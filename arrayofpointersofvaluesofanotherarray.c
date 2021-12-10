#include<stdio.h>
int main()
{

int ptr[5]={4,989,67,79,8},i;
int *pt[5];
for(i=0;i<5;i++)
{
pt[i]=&ptr[i];
}

for(i=0;i<5;i++)
{
printf("%d\n",pt[i]);
}


}
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int number;
struct node *next;
}node;

int main(void)
{

node *list = NULL;

while(1)
{
int k;
printf("\n Enter number - "); 
scanf("%d",&k);

if(k%2==0){break;}

node *n = malloc(sizeof(node));

if(n==NULL)
{return 1;}

n->number = k;
n->next = NULL;

if(list = NULL)
{ list =n ;}
else
{ for(node *ptr = list; ptr != NULL ; ptr=ptr->next)
	{
	if(ptr->next = NULL){ ptr->next = n;
                   break;}
	}

}


}
































}
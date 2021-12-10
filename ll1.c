#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int number;
struct node *next;
}node;

main()

{


node *ptr;
node *list = NULL;

node *n = malloc(sizeof(node));
if(n==NULL)
{ return 1;}
n->number = 1;
n->next = NULL;
list = n;


n = malloc(sizeof(node));
if(n==NULL)
{ return 1;}
n->number = 2;
n->next = NULL;
list->next = n;



n = malloc(sizeof(node));
if(n==NULL)
{ return 1;}
n->number = 3;
n->next = NULL;
list->next->next = n;

for(ptr= list; ptr != NULL; ptr = ptr->next)

{
printf("\n%d", ptr->number);
}






}




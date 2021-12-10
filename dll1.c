  
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int number;  
	
	struct node *next;
	struct node *before;
}node;


int main(void)
{

	node *list = NULL;
	int i;
	
	printf("\nCreate atleast Seven nodes to end the loop. After 7 nodes if you wish to stop entering the values, then enter 0. \n\n\n.");

	for(i=1;i<8;i++)
	{

		int num;
		printf("\nEnter your number: ");
		scanf("%d", &num);
	
		
		node *n = malloc(sizeof(node));

		if(!n)
		{
			return 1;		
		}


		n-> number =num;
		n-> next = NULL;
		if(list != NULL)
		{
			for (node *ptr =list; ptr!=NULL; ptr=ptr->next)
			
			{          if(ptr->next == NULL)
				{
				n->before=ptr;
				break;}
			}
		}

		if(list != NULL)
		{
			for (node *ptr =list; ptr!=NULL; ptr=ptr->next)
			
			{          if(ptr->next == NULL)
				{ptr->next=n;
				break;}
			}
		}
		else
		{
			n->before = &list;
			list=n;	
				
		}

		
		



	}


		while(1)
	{

		
		int num;
		printf("\nEnter your number: ");
		scanf("%d", &num);
		
	
		if (num == 0)
		{
			break;	
		}
		
		node *n = malloc(sizeof(node));

		if(!n)
		{
			return 1;		
		}


		n-> number =num;
		n-> next = NULL;
		if(list != NULL)
		{
			for (node *ptr =list; ptr!=NULL; ptr=ptr->next)
			
			{          if(ptr->next == NULL)
				{
				n->before=ptr;
				break;}
			}
		}

		if(list != NULL)
		{
			for (node *ptr =list; ptr!=NULL; ptr=ptr->next)
			
			{          if(ptr->next == NULL)
				{ptr->next=n;
				break;}
			}
		}
		else
		{
			n->before = &list;
			list=n;	
				
		}

		
		

	
}





printf("\n\n DOUBLY LINKED LISTS : ");
for(node *ptr = list; ptr !=NULL; ptr=ptr->next)
{
printf("\n\nNumber -%d    \nAddress of previous node- %p   Address of next node - %p",ptr->number, ptr->before, ptr->next);	
}

}
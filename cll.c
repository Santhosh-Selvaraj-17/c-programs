  
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int number;  
	struct node *next;
}node;


int main(void)
{

	node *list = NULL;
   	int i;
//SINCE WE WANT TO CREATE A LIST OF ATLEAST SEVEN NODES..

printf("Create atleast seven nodes to end the loop. After 7 nodes, if you want to continue, keep entering values. \nOthewise, enter 0 to exit the loop and complete the list.");

for(i=1;i<8;i++){


		int num;
		printf("\nenter you number: ");
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
				{ptr->next=n;
				break;}
			}
		}
		else
		{
			list=n;		
		}

}


		while(1)
	{

		int num;
		printf("\nenter you number: ");
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
				{ptr->next=n;
				break;}
			}
		}
		else
		{
			list=n;		
		}


	}	
//Connecting the ends of the list.
for (node *ptr = list; ptr != NULL; ptr = ptr->next)
			
			{    
                                                               if(ptr->next == NULL)
				{ptr->next= list;
				break;}     
			}

//Printing the circular list to actually confirm whether this is circularly linked.

printf("\nThe list of circularly linked values are - ");
printf("\n%d - %p", list->number,list->next);
int pj = 0;
for (node *ptr = list->next; pj<100; ptr = ptr->next)
			
			{         
		                             printf("\n%d - %p", ptr->number, ptr->next); pj = pj+1;}
for(node *ptr = list->next; ptr != list ; ptr = ptr->next)

			{
			if(ptr->next == list)  printf("\n%d - %p", ptr->next->number, ptr->next->next );
			}

}


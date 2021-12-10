  
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




int cn,f,op;
printf("\n Do you want to add some more nodes? 1-yes : else-no - ");
scanf("%d", &f);

printf("Enter the number of nodes you want to add - ");
scanf("%d", &cn);

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




}

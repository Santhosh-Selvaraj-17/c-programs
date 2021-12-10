  
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



int l,cn,v,j;


printf("\nEnter '1' if you want to edit a data value, else enter any other number - ");
scanf("%d", &l);

if(l==1)
{
printf("\nEnter the number of changes you want to do - ");
scanf("%d", &j);
for(v=1;v<=j;v++)
{
int m;
printf("\nEnter the number you wanna change - ");
scanf("%d", &m);
printf("\nEnter the number replacing %d -  ", m);
scanf("%d", &cn);

for(node *ptr = list; ptr != NULL; ptr = ptr->next)
{
if(ptr->number == m){ ptr->number = cn;}
}}
}





}

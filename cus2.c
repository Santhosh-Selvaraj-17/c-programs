  
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













int b,kn,f,pp,po;
node  *pre= NULL;
node *kre = NULL;
printf("\nEnter 1 if you want to delete some nodes - ");
scanf("%d",&b);

if(b==1)
   {printf("\nEnter the number of nodes you want to delete - ");
    scanf("%d",&kn);

for(f=1;f<=kn;f++)
      {
printf("\nEnter the number value of the node you want to delete - ");
scanf("%d",&po);

for(node *ptr = list; ptr != NULL; ptr = ptr->next)
   {
if(ptr->number == po){ ptr = ptr->next;

} 
          }

      }

   }

printf("\nHere are the modified values : ");
for(node *ptr = list ; ptr !=NULL; ptr=ptr->next)
{
printf("\n\n%d - %p ",ptr->number, ptr->next);	
}




}

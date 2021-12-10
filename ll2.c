  
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int number;  
	struct node *next;
}node;

//FUNCTION TO REVERSE THE LINKED LIST.
node* reverse(node *list)
{



node *start =NULL;
for(node *ptr = list; ptr != NULL; ptr = ptr->next)
         {
   if(ptr == list)
	   {
 	  node *n =  malloc(sizeof(node));
 	  if(n == NULL) return 1;

 	  n->number = list->number;
 	  n->next = NULL;
 	  start = n;
		
	   }
  
    else
	   {
		node *n = malloc(sizeof(node));
		if(n==NULL){return 1;}
		
		n->number = ptr->number;
		n->next  = start;
		start =n;



	   }








           }


return start;

}

//MAIN FUNCTION.
int main(void)
{

	node *list = NULL;
 //Since atleast 7 nodes are necessary.
printf("Enter atleast 7 nodes to enter to end the loop. If you want to continue further, keep on entering values.\n Otherwise enter 0 to end the loop and the list.");
		for(int i =1; i<8 ; i++){


		int num;
		printf("\nenter you number: ");
		scanf("%d", &num);
		node *n = malloc(sizeof(node));

		if(n == NULL)
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

		if(n == NULL)
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





//PRINTING THE ORIGINAL LINKED LIST

printf("\nThis is the original linked list");
for(node *ptr = list; ptr != NULL; ptr = ptr->next)
		{
		printf("\n%d - %p",ptr->number, ptr->next );
		}

		printf("\n\n");


//PRINTING THE REVERSED LIST

printf("\nThis is the reversed linked list");

for(node *ptr = reverse(list); ptr != NULL; ptr = ptr->next)
		{
		printf("\n%d - %p",ptr->number, ptr->next );
		}





}



/*
6)
a) Explain any of the data structures in Q5, with an example from your day to day life.
STACKS :
In short 'Stack' is a linear data structure which follows Last in, First out principle. Linear data structures are a type of data structures where the arrangement of the data follows a linear trend. We call it Last in, First out (LIFO) because this data structure is designed in a way such that the element that is added last to the linear structure is (should be) removed first, when the removal process is initiated by the user. The name "stack" for this type of linear structure comes from the analogy to a set of physical items stacked on top of each other.For example, a stack of books. The books at the bottom of the stack are not accessible unless we remove the books on top, resembling LIFO principle. Stacks have two main principal operations. 
1) Push - This operation adds an element to the top of the stack, i.e, this operation adds an element to the collection.
2) Pop - This operation removes the most recently added element that was not yet removed,i.e, this operation removes the element at the top of the stack.
There is one additional operation called peek. Peek operation gives access to the top without modifying the stack, i.e, it returns the value of the top element(most recently added) without modifying the structure.

Explanation with day to day life example :
In day to day life, we might want to access a collection of things sequentially, so as to assure that we are not missing any object  in the collection. For instance, imagine an office where the accountant tallies the daily accounts and create an accounts file for each day, throught the next 10 days. All the files are hardcopies. The accountant stacks up all the files daily in his cabin. At the end of the 10 days the stack of files are sent to the Auditor for checking the accuracy.
The following is the technical description of this process.
1) Accountant makes an account file on 1st October. He keeps it on the table.
2)The accountant creates another account file for 2nd oct. He keeps it at the top of the file for previous day. 
3)This is repeated for 10 days straight. 
4)On 10th October's evening, the stack of accounts files are sent to the auditor's table. The auditor will check the files from 10th october 1st ooctober in reverse order
5) The auditor checks the file on top (file of 1st oct) and puts it away from the stack. 
6) This time the top file is of 2nd oct. He checks it and puts it away from the stack.
7) He does it for all the 10 files. And his job is done.
This is very much similar to stack. Because,
I.	 Removing the top file is very similar to the pop operation in Stacks.
II.	Accessing the top file is very similar to the peek operation.
III.	The accountant putting a new accounts file everyday on the top of the stack is nothing but push operatin of STACKS in C.
IV.	The auditor will check whether he checked all the files before declaring his jobe done. This can be done in C using a user-defined function.

b) Discuss your thoughts how it can be implemented when you try to make a computational simulation of the same.
Lets try to make a real stack in C program based on the example above.
Firstly, the objects in the example are hardcopy of files. We can consider digital files instead. 
For simplicity, this stack can be implemented in arrays. So we should store the daily files inside the array. But I don't have any idea about how to store files in an array cell. So I decided to store the file pointers inside the array cells .Also, it will be helpful to define the pop, peek and push functions beforehand.So the following is the overall idea of simulation.
1) The accountant of the office declares a file pointer fp in the cprogram. Using the fopen function, he stores the address of the 1st october file inside fp. Now the 1st october file is open and not closed. He pushes that file pointer into the stack using the push function that is already defined in  the program(function given in the code). This is repeatedly done for next 10 days by the accountant, using 10 different file pointer variables.
 2) The accountant further decides to make things easy for the auditor. All the 10 files are technically open.
⦁	 The accountant accesses the top file using pop function (function is explained in the code that will be attached). 
⦁	After the pop function is applied, the file pointer of the popped out top file is returned to variable k.  
⦁	Using a while loop,fscanf and fprintf functions the accountant scans all the contents of the popped out top file( the last file that was added) and prints it at the time of running. 
⦁	Since the pop function is already applied once, the top element (file pointer) in the stack is now a different one (actually the file pointer of 9th oct file). All the process mentioned in above three points is done again and again using a for loop for 10 times. 
The accountant copies all the 10 files and the C SOURCE FILE  into a pendrive and gives it to the Auditor. The auditor copies the content of pendrive into his PC. He runs the c program in his terminal.
When run by the Auditor, it prints the contents of the 10 files sequentially from 10th oct to 1st oct as an output. But this is not done all at once. He is demanded to click 's' and ENTER before moving to the next file from the current file. During this phase he can check the current file and note down the errors. After when he clicks 's' and ENTER, the next file is printed in the output. 
The code for the program written by the accountant is attached in this file.All this text part is written inside comments. Please note that the stack in the attached program is  designed to contain only two files for simplicity.
REMARK - If the Auditor wants to read the files from 1st - 10th october sequentially, he should demand the accountant to reverse the stack before submitting.
---------------------------------------------------------------------------------------------------------------------------
Please run the following code for verification.
------------------------------------------------------------------------------------------------------------------------
*/
//CODE
#include<stdio.h>

int MAXSIZE = 31;
FILE *stack[31];
int top = -1;

int isempty() 
{
	if(top == -1)
	return 1;
	else return 0;
}


int isfull() 
{
	if(top == MAXSIZE)
	return 1;
                   else return 0;
}


FILE* peek() 
{
	return stack[top];
}


FILE* pop() 
{
	FILE *kp;
	if(!isempty())
	 {
		kp = stack[top];
		top = top - 1;
		return kp;
	}

	else printf("Could not retrieve data, Stack is empty.\n");

}



int push(FILE *fp) 
{
	if(!isfull())
	{
		top = top + 1;
		stack[top] = fp;
	} 

	else printf("Could not insert data, Stack is full.\n");

}


int main() {
	
char buff[255]; 
char cont[300];		
		FILE *sp;
		
		sp = fopen("wot.txt","r");
		push(sp);

		FILE *sp1;
		
		sp1 = fopen("wot1.txt","r");
		push(sp1);



		int l;
		FILE *k;
		for(int s = 1;s<3;s++)
		{
			k = pop();
                                    		 while(fscanf(k, "%s", buff)!= EOF)
   			{
				printf("%s ", buff);
   			}

			if(s<2){printf("\nEnter s and press enter key ");
			scanf("%d",l);}
		}



	}





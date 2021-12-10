STACKS :
Stacks :
In short 'Stack' is a linear data structure which follows Last in, First out principle. Linear data structures are a type of data structures where the arrangement of the data follows a linear trend. We call it Last in, First out (LIFO) because this data structure is designed in a way such that the element that is added last to the linear structure is (should be) removed first, when the removal process is initiated by the user. The name "stack" for this type of linear structure comes from the analogy to a set of physical items stacked on top of each other.For example, a stack of books. The books at the bottom of the stack are not accessible unless we remove the books on top, resembling LIFO principle. Stacks have two main principal operations. 
1) Push - This operation adds an element to the top of the stack, i.e, this operation adds an element to the collection.
2) Pop - This operation removes the most recently added element that was not yet removed,i.e, this operation removes the element at the top of the stack.
There is one additional operation called peek. Peek operation gives access to the top without modifying the stack, i.e, it returns the value of the top element(most recently added) without modifying the structure.

Explanation with day to day life example :
In day to day life, we might want to access a collection of things sequentially, so as to assure that we are not missing any object  in the collection. For instance, we might stack up the hardcopy of some important files without any sorted order. In that case, if we want to get the file that we desire, the simplest way to do that is the following. 
ALGORITHM(1)
1) Take the stack of file
2) Check the file on the top of the stack. 
⦁	If it's the file that we are searching, stop further searching. 
⦁	If it's not what we are searching, remove that file on the top from the stack and keep it away. Now we have a different object( the second file) that occupies the top of the stack.
3) Repeat the same process mentioned in (2) untill you get the desired file.
4) After getting the desired file, again build the stack, but this time in a sorted order. Put the old files on bottom and recent files on top. This is done as follows,
⦁	Firstly, check if every file in the stack is removed. If not, remove them one by one again and empty the stack that is already made.
⦁	Take the oldest file according the date of modification.
⦁	Put it on the bottom.
⦁	Take the second oldest file. Put it on top of the bottom file.
⦁	Take the third oldest file and repeat the process for all the files.
⦁	Terminate the process when all the files are incorporated into the stack.
[REMARKS : This way of searching a file in a stack of file prevents us from missing to notice any object(file) in the colletion. This is the most straightforward and an organised way of searching.]
This is very much similar to stack. Because,
I.	 Removing the top file is very similar to the pop operation in Stacks. 
II.	For checking whether the top file is the desired file, we have to access the file first. This is same as peek operation in stacks. 
III.	We have to check whether the stack of files is empty before rebuilding it. This is done by an user-defined function.
IV.	We have to reconstruct the stack by building them one by one in sorted order. This is similar to push operation done in stacks.
V.	We have to check whether the stack of file is full before terminating the construction of the stack. This is also done by an user-defined function.






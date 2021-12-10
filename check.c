#include<stdio.h>
main()
	{


int a,b,c,count,d;

for(a=2;a<1000 && a%2 ==1 ;a++)
{
b = a-1;
count = 1;
while(b != a-1){
if(b%2 == 1) {b = (b+a)/2;}
else b = b/2;
count = count + 1;
            }

if(count != (a-1)/2) printf("\n%d",a);





}
	}
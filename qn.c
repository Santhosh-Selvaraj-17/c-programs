#include<stdio.h>
main(){
int a,b,c,d,count;
printf("Enter a number - ");
scanf("%d", &d);

for(a=1;a<d;a++){

count = 2;
if(a%2==1)
{

b = a-1;
b = (a-1)/2; 

while(b != a-1){if(b%2==1) b = (b+a)/2;
	else b = b/2;
	
 	count = count + 1;
	}


if(count == a) printf("\n%d", a);

}



		}
}
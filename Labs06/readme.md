/**
           *Programmer: Zaid Bin Naveed
           *Desc: Doing the tasks of labs06
           *Date: 06/10/2023
 *
 */
Question 1;
#include<stdio.h>

int main(){
int K;
int a=0;
printf("enter a positive number to check if its a perfect square:");
scaf("%d",&K);

for(int j=1; j<K ;j = j+1) {
if (K%j==0) {
a=j+a;
}
}
if (a==K) {
printf("Your number is perfect");
}
if (a!=K) {
printf("Your number is not a perfect number");
}
return 0;
}
Question 2;
#include <stdio.h>

int main ()
{
	int a=0;
	int b=1;
	int c=1;
	int sum=0;
	
	printf("The fibonacci sequence is: \n");
	printf(" %d,", b);
	printf(" %d,", c);
	
	for (a=b+c; a<10000;)
	{
		a=b+c;
		if(a>10000)
		{
			break;
		}
		b=c;
		c=a;
		printf(" %d,", a);
		
		if(a%3==0 || a%5==0 || a%7==0)
		{
			sum=sum+a;
		}
	}
	printf("\n");
	printf("The sum of the numbers in fibonacci sequence which are divisible by 3,5 or 7 is: \n");
	printf("%d", sum);
}
Question 3;
#include<stdio.h>

int main(){
	int a=0;
	int b=0;
	
	printf("Enter first number: ");
	scanf("%d", &a);	
	
	printf("Enter second number: ");
	scanf("%d", &b);
		
	int GCD=0;
	
	if(b>a)
	{
		GCD=b;
	}
	else
	{
		GCD=a;
	}
	
	for (GCD>0; GCD--;)
	{
		if(b%GCD==0 && a%GCD==0)
		{
			break;
		}
	}
	
	printf("The GCD is: \n");
	printf("%d", GCD);
	
	int LCM=b*a/GCD;
	
	printf("\n");
	printf("The LCM is: \n");
	printf("%d", LCM);
	
}
Question 4;
#include <stdio.h>

int main()
{
	int n1;
	int n2;
	int c;
	
	printf("Enter first number: \n");
	scanf("%d", &n1);
	printf("Enter second number: \n");
	scanf("%d", &n2);
	
	printf("\n");
	printf("Output is: ");
	printf("\n");
	
	for(;n1<=n2; n1++)
	{
		switch(n1)
		{
			case 1:
				printf(" One ");
				printf("\n");
			break;
			
			case 2:
				printf(" Two ");
				printf("\n");
			break;
			
			case 3:
				printf(" Three ");
				printf("\n");
			break;
			
			case 4:
				printf(" Four ");
				printf("\n");
			break;
			
			case 5:
				printf(" Five ");
				printf("\n");
			break;
			
			case 6:
				printf(" Six ");
				printf("\n");
			break;
			
			case 7:
				printf(" Seven ");
				printf("\n");
			break;
			
			case 8:
				printf(" Eight ");
				printf("\n");
			break;
			
			case 9:
				printf(" Nine ");
				printf("\n");
			break;
			
			default:
				if(n1%2==0)
				{
					printf(" Even ");
					printf("\n");
				}
				else 
				{
					printf(" Odd ");
					printf("\n");
				}
		}
	}
}
Question 5;
#include <stdio.h>

int main()
{
	int i;
	
	for (i=1; i<=7; i++)
	{
		switch (i)
		{
			case 1:
				printf("0  0  0  0");
				printf("\n");
				break;
			case 2:
				printf("   1  1   ");
				printf("\n");
				break;
			case 3:
				printf("2  2  2  2");
				printf("\n"); 
				break;
			case 4:
				printf("   3  3   ");
				printf("\n");
				break;
			case 5:
				printf("4  4  4  4");
				printf("\n");
				break;
			case 6:
				printf("   5  5   ");
				printf("\n");
				break;
			case 7:
				printf("6  6  6  6");
				break;
		}
	}
}
Question 7;
#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	int i;
	
	printf("Enter the number of elements for arrays: ");
	scanf("%d", &n);
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("The elements of the array are: ");
	for (i=0; i<n; i++)
	{
		printf("\n%d,", arr[i]);
	}
	printf("\nThe sum of all the elements in the array is: %d", sum);
}
Question 8;
#include <stdio.h>

int main()
{
	int n;
	int i;
	
	printf("Enter the number of elements for arrays: ");
	scanf("%d", &n);
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a number to be stores in array:\n");
		scanf("%d", &arr[i]);
	}
	int c;
	c=n;
	
	printf("The elements of array in reverse order are: ");
	
	for (c>=0; c--;)
	{
		printf("\n %d \n", arr[c]);
	}
}

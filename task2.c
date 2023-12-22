/*
Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5
*/
#include<stdio.h>

void main(){
	
	int x,y;
	int swap;
	int *num1,*num2;
	
	
	printf("enter any number X :-");
	scanf("%d",&x);
	printf("enter any number Y :-");
	scanf("%d",&y);
	
	num1 = &x;
	num2 = &y;
	
	swap = *num1;
	
	*num1 = *num2;
	*num2 = swap;
	printf("swap = A = %d && B = %d",x,y);
	
}

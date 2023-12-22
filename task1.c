/*
Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
For example,
Input:
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = 4
a[2] = 1
a[3] = 3
a[4] = 7

Output:
Square of each element:
4, 16, 1, 9, 49
*/
#include<stdio.h>

void main(){
	
	int a[5];
	int *ptr,i;
	
		ptr = &a;	


	for(i=0; i<=4; i++){
	printf("enter element :- ");
	scanf("%d",&a[i]);
	}
	
	for(i=0; i<=4; i++){
	printf("%d => %u\n",(*(ptr+i))*(*(ptr+i)),(ptr+i));
	
 }
}

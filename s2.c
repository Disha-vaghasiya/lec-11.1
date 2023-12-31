/*Q.2 Write a Program to swap two variables using Pointers.
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
y: 5*/


#include<stdio.h>
void main(){
  int a, b, swap;
    int *ptr1, *ptr2;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("\n Before swapping a = %d and b = %d", a, b);

    
    ptr1 = &a;
    ptr2 = &b;

    
    swap = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = swap;

    printf("\n After swapping a = %d and b = %d", a, b);

  
}

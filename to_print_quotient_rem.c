// A program to print quotinent  and reminder
#include<stdio.h>
int main()
{
int i, n ;
printf("Enter the number\n");
scanf("%d",&i);
printf("Enter the divisor\n");
scanf("%d",&n);

float q = i/n ;
printf("The quotinent  is %f\n",q);

int r = i%n;
printf("The reminder is  %d\n",r);


return 0;
}

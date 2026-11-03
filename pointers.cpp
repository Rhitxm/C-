//sum of elements using pointers 
#include <stdio.h>
int main()
{
int a[5] = {2, 4, 6, 8, 10};
int *p = a, sum = 0, i;
for (i = 0; i < 5; i++)
{
sum = sum + *p;
p++; // move to the next element
}
printf("Sum = %d\n", sum);
return 0;
}

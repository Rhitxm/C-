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




//pointer arithmatic on an array'

#include <stdio.h>
int main()
{
int a[5] = {10, 20, 30, 40, 50};
int *p = a; // same as &a[0]
int i;
for (i = 0; i < 5; i++)
printf("*(p + %d) = %d (address %p)\n", i, *(p + i), (void*)(p +
i));
return 0;
}

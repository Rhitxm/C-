//demonstrate an union
#include <stdio.h>
union data
{
int i;
float f;
char c;
};
int main()
{
union data d;
d.i = 10;
printf("d.i = %d\n", d.i);
d.f = 5.5; // overwrites d.i
printf("d.f = %.1f\n", d.f);
printf("d.i after storing float = %d (garbage)\n", d.i);
return 0;
}


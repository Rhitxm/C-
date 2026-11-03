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


//compare size of structure and union
#include <stdio.h>
struct sdata
{
int i;
float f;
char c;
};
C Programming Lab Manual: Experiments 1 to 14
Page 56 of 66
union udata
{
int i;
float f;
char c;
};
int main()
{
printf("Size of structure = %d bytes\n", (int)sizeof(struct sdata));
printf("Size of union = %d bytes\n", (int)sizeof(union udata));
return 0;
}

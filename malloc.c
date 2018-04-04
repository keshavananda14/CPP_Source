#include<stdio.h>

void main()
{
int *p;

printf("%p===\n",p);
p=(int *)malloc(4);
printf("%p===\n",p);
p=(int *)realloc(p,10);
printf("%p===\n",p);

}

#include<stdio.h>
#include<stdlib.h>

int my_fun() // our custom main function
{
    printf("Hello world!\n");
    return 0;
}
void _start()
{
    int x = my_fun(); //calling custom main function
    exit(x);
}

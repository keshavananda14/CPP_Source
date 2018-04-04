#include <stdio.h>
int T;
  
int main()
{
    struct T { double x; };  // In C++, this T hides the global variable T, 
                            // but not in C
    printf("%d\n", sizeof(T));
    printf("%d\n", sizeof(1==1));
    return 0;
}

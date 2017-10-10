#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y[5] = {1, 3};
    int i;

    printf("%p\n%p\n%p\n", y, &y, &y[0]);

    return 0;
}

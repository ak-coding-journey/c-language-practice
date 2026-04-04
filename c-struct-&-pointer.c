#include <stdio.h>
#include <stdlib.h>
struct box
{
    int value;
};

int main()
{
    struct box b1;

    (*(&b1)).value=25;

    printf("the value is: %d\n",b1.value);

    return 0;
}

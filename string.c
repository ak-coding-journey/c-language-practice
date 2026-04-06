#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char city[7]="mumbai";

    printf("%s\n",city);

    for(int i=0;city[i] != '\0';i++)
    {
        printf("%c\n",city[i]);
    }
    return 0;
}

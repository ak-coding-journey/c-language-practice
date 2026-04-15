#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CITIES 10
#define MAX_LENGTH 50

int main()
{
    char cities[MAX_CITIES][MAX_LENGTH];
    char target[MAX_LENGTH];
    int n,found=0,i=0;

    printf("enter the number of cities (max %d)\n",MAX_CITIES);
    scanf("%d",&n);
    getchar();


    printf("\nenter %d cities names\n\n",n);
    for(i=0;i<n;i++)
    {
        printf("enter the name of city %d:-\n",i+1);
        fgets(cities[i],MAX_LENGTH,stdin);
        cities[i][strcspn(cities[i],"\n")]='\0';
    }

    printf("\nenter the city name to search:-\n");
    fgets(target,MAX_LENGTH,stdin);
    target[strcspn(target,"\n")]='\0';

    for(i=0;i<n;i++)
    {
        if(strcmp(target,cities[i])==0)
        {
            printf("the city %s found at position %d.",target,i);
            found=1;
            break;
        }
    }

    if(!found)
    {
        printf("the city %s not found.",target);
    }
    return 0;
}

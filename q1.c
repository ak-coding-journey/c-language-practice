#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CITY 5
#define MAX_LEN 50

int main()
{
   char city [MAX_CITY][MAX_LEN];

   printf("enter %d city name:-\n\n",MAX_CITY);
   for(int i=0;i<MAX_CITY;i++)
   {
       printf("enter the name of city %d:\n",i+1);

       fgets(city[i],MAX_LEN,stdin);
       city[i][strcspn(city[i],"\n")]='\0';

   }

   printf("\nenter %d cities names are:-\n\n",MAX_CITY);

   for(int i=0;i<MAX_CITY;i++)
   {
       printf("city %d name is : %s\n",i+1,city[i]);
   }

    return 0;
}

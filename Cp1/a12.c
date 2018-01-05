#include <stdio.h>


int main()
{
    int i,j;
    printf("How many integers you want to show?\n");
    scanf("%d", &j);
    
    printf(":::::  A TABLE OF POWERS  :::::\n\n"
           "Integer    Square    3rd power    4th power    5th power\n"
           "-------    ------    ---------    ---------    ---------\n");
    
    for(i=1;i<=j;i++)
    {
        printf("%7d%10d%13d%13d%13d\n",i,i*i,i*i*i,i*i*i*i,i*i*i*i*i);
    }
    return 0;
}

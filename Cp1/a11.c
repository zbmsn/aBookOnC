#include <stdio.h>

int main(void)
{ 
    
    char str[100];
    int  age;
    printf("What's your name?\n");
    scanf("%[^\n]%*c", str);       /* fgets(str, 100, stdin); there is an error use fgets, it will include EOF */
    printf("What's your age?\n");
    scanf("%d", &age);
    
    printf("Hello %s, next year you will be %d", str, age+1);
    
    return 0;
}

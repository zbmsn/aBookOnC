#include <stdio.h>
#include <string.h>
void row();
void column();
int columnRight(int len);

int main()
{
    char s[100];
    int len;
    strcpy(s, " The king of kings.");
    len=strlen(s);
    
    row();
    column();
    printf("|%s", s);
    columnRight(len);
    column();
    row();
    return 0;
}

void row()
{
    int i;
    char a[100];
    for(i=0;i<60;i++)
    {
        a[i]='-';
        printf("%c", a[i]);
    }
    return;
}

void column()
{
    int i;
    char a[100];
    a[0]=a[59]='|';
    printf("\n%c",a[0]);
    for(i=1;i<59;i++)
    {
        a[i]=' ';
        printf("%c", a[i]);
    }
    printf("%c\n",a[59]);
return;
}

int columnRight(int len)
{
    int i;
    char a[100];
    for(i=len+1;i<59;i++)
    {
        a[i]=' ';
        printf("%c", a[i]);
    }
 
    printf("%c", '|');
    return 0;
}
      


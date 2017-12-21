

int main(void)
{
    
    double x;
    x=1/0.0;
    
    #include <stdio.h>
    
    printf("x=%f\n", x);
    return 0; 
    
}
/* Output is correct! */

int main(void)
{
    
    double x;
    x=1/0.0;
   
    printf("x=%f\n", x);
    return 0; 
    
    #include <stdio.h>
}

/* Output is wrong! */



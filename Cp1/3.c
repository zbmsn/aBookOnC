#include <stdio.h>

int main(void)
{
    double miles, yards;
    double kilometers;
    
    miles=26;
    yards=385;
    kilometers=1.609*(miles+yards/1760.0);
    printf("\nA marathon is %f kilometers.\n\n", kilometers);
    return 0;
}

/* double 385/1760  =0.21875 
   double 385/1760.0=0.21875
   
   */

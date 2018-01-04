#include <stdio.h>

#define BOTTOM_SPACE "\n\n\n\n\n"
#define HEIGHT        10
#define OFFSET       "                 "   /* 17 blanks*/
#define TOP_SPACE    "\n\n\n\n\n"

int main(void)
{
    int i;
    
    printf(TOP_SPACE);
    printf(OFFSET "   CCCCCCCCCCCCCCCCCCCCC   \n");
    printf(OFFSET "  CCCCCCCCCCCCCCCCCCCCCCC  \n");
    printf(OFFSET " CCCCCCCC         CCCCCCCC \n");
    printf(OFFSET "CCCCCCCC           CCCCCCCC\n");
    for(i=0; i<HEIGHT; ++i)
       printf(OFFSET "CCCCCCCC\n");
    
    printf(OFFSET "CCCCCCCC           CCCCCCCC\n");
    printf(OFFSET " CCCCCCCC         CCCCCCCC \n");
    printf(OFFSET "  CCCCCCCCCCCCCCCCCCCCCCC  \n");
    printf(OFFSET "   CCCCCCCCCCCCCCCCCCCCC   \n");
    printf(BOTTOM_SPACE);
    return 0;
}

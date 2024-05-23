#include <stdio.h>
int main ()
{
        int x,y1;
        x=75;
        y1=89;
        if (x>10)
        {
            int y2=50;
            y1=y1+y2;
        }
    printf("x=%d, y1=%d\n",x,y1);
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int max(int a, int b, int c, int d)
{
   int Max ;
   if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                Max =a;
            }
            else
            {
                Max = d ;
            }
        }
        else if (c>d)
        {
            Max = c;
        }
        else
        {
            Max = d;
        }
    }
    else if(b>c)
    {
        if (b>d)
        {

            Max = b;
        }
        else
        {
            Max = d ;
        }
    }
    else if (c>b)
    {
        if (c>d)
        {
            Max =  c ;
        }
        else
        {
            Max = d ;
        }
    }
   return Max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
        return 0;

}

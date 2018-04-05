#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fat = 1;
    scanf("%d",&n);
    for(i = n; i > 0; i--)
    {
        fat *= i;
    }
    printf("%d",fat);
    return 0;
}

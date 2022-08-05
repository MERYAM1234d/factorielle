#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, f, n;
    printf("enntrz le valeur de nombre\n");
    scanf("%d",&n);
    if ( n < 0)
    printf("le factorielle  est impossible");
    else
    for (i = 1; i<= n; i++)
    f = f * i;
     printf(" le factorielle est %d \n",f);
        return 0;
}

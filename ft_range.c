#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int step = 1;
    int *tab;
    
    int n = end -start;
    if(n < 0)
        n = -n;
    tab = malloc(sizeof(int) * n);
    if (start > end)
        step = -1;
    while(i <= n)
    {
        tab[i] = start;
        start = start + step;
        i++;
    }
    return tab;
}

int main()
{
    int i = 0;
    int *tab = ft_range(1,5);
    while(i < 5)
    {
        printf("%d ",tab[i]);
        i++;
    }
    return 0;
}
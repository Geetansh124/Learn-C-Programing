#include <stdio.h>

int eo(int n)
{
    return n%2;
}

int main()
{
    int n;
    scanf("%d",&n);
    eo(n)?printf("Odd"):printf("Even");
    return 0;
}

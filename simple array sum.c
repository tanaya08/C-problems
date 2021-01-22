#include <stdio.h>

void main()
{
    int n, i, j, sum=0, ar[1000];
    scanf("%d", &n);
    for (i=0; i<n;i++)
        scanf("%d",&ar[i]);
    for (j=0;j<n;j++)
        sum=sum+ar[j];
    printf("%d", sum);
}





#include<stdio.h>
#define max 100
int main()
{
    int a[max],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=1;i<n;i++)
    {
        c=c^a[i];
    }
    printf("%d",c);
return 0;
}

#include<stdio.h>
int main()
{
    int i,a[3],b[3],as=0,bs=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            as++;
        else if(a[i]<b[i])
            bs++;
    }
    printf("%d %d",as,bs);
    return 0;
}

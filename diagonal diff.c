#include<stdio.h>
#define max 100

int abs(int n){
    if(n<0){
        n=n*(-1);
    }
    return n;
}

int main()
{

    int n,a[max][max],i,j,diff,sp=0,ss=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               sp=sp+a[i][j];
            }
            if((i+j)==(n-1))
            {
                ss=ss+a[i][j];
            }
        }
    }
    diff=abs(sp)-abs(ss);
    printf("%d",diff);
    return 0;
}



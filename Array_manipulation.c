#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long n,m,max=0,x=0;
    scanf("%lld %lld",&n,&m);
    int* arr=(int *)malloc(sizeof(int)*(n+1));
    for(int i=1;i<=n;i++)
    {
        arr[i]=0;
        for(int j=0;j<m;j++)
        {
            long long int a,b,k;
            scanf("%lld %lld %lld",&a,&b,&k);
            arr[a]+=k;
            if(b+1<=n)
                arr[b+1]-=k;
        }
    }
    for(int i=1;i<=n;i++)
    {
        x+=arr[i];
        if(max<x)
            max=x;
    }
    printf("%lld",max);
}

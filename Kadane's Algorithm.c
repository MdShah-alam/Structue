#include<stdio.h>

int array_sum(int arr[],int n)
{
//    int maxsum=-1;
//    int cursum=0;
//    for(int i=0;i<5;i++)
//    {
//        cursum=cursum+Arr[i];
//        if(cursum>maxsum)
//            maxsum=cursum;
//        if(cursum<0)
//            cursum=0;
//    }

    int maxsum=arr[0];
    for(int i=0; i<n; i++)
    {
        int cursum=0;
        for(int j=i;j<n;j++)
        {
            cursum=cursum+arr[i];
            if(maxsum<cursum)
                maxsum=cursum;
            if(cursum<0)
                cursum;
        }
    }
    return maxsum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int maxsum=array_sum(arr,n);
    printf("%d",maxsum);
}

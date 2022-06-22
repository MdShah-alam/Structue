#include<stdio.h>

struct Student
{
    char name[100];
    int roll;
    float mark;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student highest={.mark=0};
    for(int i=1;i<=n;i++)
    {
        struct Student a;
        scanf("%s %d %f",&a.name,&a.roll,&a.mark);
        if(highest.mark<a.mark)
            highest=a;
    }
    printf("%s  %d  %.2f\n",highest.name,highest.roll,highest.mark);
    return 0;
}

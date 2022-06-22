#include<stdio.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};

void print_student(struct Student a)
{
    printf("%s  %d  %.2f\n",a.name,a.roll,a.marks);
}

void fun(struct Student *st)
{
    st[1].marks=95;
}

int main()
{
    int n;
    scanf("%d",&n);
    struct Student a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%s %d %f",&a[i].name,&a[i].roll,&a[i].marks);
    }

    fun(a);

    for(int i=0;i<n;i++)
    {
        print_student(a[i]);
    }
}

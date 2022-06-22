#include<stdio.h>

struct Student
{
    char name[10];
    int roll;
    float marks;
};

void fun(struct Student *st)
{
    st->marks=80;
}

int main()
{
    struct Student a={"Rakib",21,70};
    fun(&a);

    printf("%s  %d  %.2f\n",a.name,a.roll,a.marks);
    return 0;
}

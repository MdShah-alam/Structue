#include<stdio.h>

struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student highest={.marks=0};
    struct Student lowest={.marks=100};

    for(int i=1;i<=n;i++)
    {
        struct Student a;
        scanf("%s %d %d %c %d",&a.name,&a.marks,&a.roll,&a.section,&a.whichClass);
        if(a.marks>highest.marks)
            highest=a;
        if(lowest.marks>a.marks)
            lowest=a;
    }

    printf("\n%s %d %d %c %d\n",highest.name,highest.marks,highest.roll,highest.section,highest.whichClass);
    printf("%s %d %d %c %d\n",lowest.name,lowest.marks,lowest.roll,lowest.section,lowest.whichClass);
}

/** “Akib” 91 29 ‘C’ 9
“Sakib” 99 31 ‘D’ 9
“Rakib” 57 45 ‘D’ 9
*/

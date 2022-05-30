#include<stdio.h>
#include<string.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Student
{
    char * name[100];
    int class;
    int roll;
    struct Date dob;
};

void printfDate(struct Date date)
{
    printf("%d-%d-%d\n ",date.day,date.month,date.year);
}

struct Date inputdate()
{
    struct Date date;
    scanf("%d-%d-%d",&date.day,&date.month,&date.year);
    return date;
}

void print_student(struct Student st)
{
    printf("Name :%s\n",st.name);
    printf("class :%d\n",st.class);
    printf("roll :%d\n",st.roll);

    printf("D-O-B : ");
    printfDate(st.dob);

}

struct Student input()
{
    struct Student st;

    printf("Name :");
    gets(st.name);
    gets(st.name);

    printf("class :");
    scanf("%d",&st.class);

    printf("roll :");
    scanf("%d",&st.roll);

    printf("D-O-B : ");
    st.dob=inputdate();
    return st;
}

int main()
{
    int n;
    printf("Enter the numbers of student of class :");
    scanf("%d",&n);
    struct Student students[n];

    for(int i=1; i<=n; i++)
    {
        printf("input student %d info\n",i);
        students[i-1]=input();
    }
    for(int i=1; i<=n; i++)
    {
        printf("input student %d info\n",i);
        print_student(students[i-1]);
    }
}

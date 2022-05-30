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
};

int main()
{
    struct Student st;

    printf("Name :");
    gets(st.name);
    printf("class :");
    scanf("%d",&st.class);
    printf("Roll :");
    scanf("%d",&st.roll);
    printf("\n\nName : %s",st.name);
    printf("\nClass :%d",st.class);
    printf("\nRoll :%d",st.roll);

}

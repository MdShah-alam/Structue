#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct Date date1,date2;
    printf("Enter the birthday of person one :");
    scanf("%d %d %d",&date1.day,&date1.month,&date1.year);

    printf("Enter the birthday of person two :");
    scanf("%d %d %d",&date2.day,&date2.month,&date2.year);

    if(date1.day==date2.day&&
       date1.month==date2.month&&
       date1.year==date2.year)
    {
        printf("same");
    }
    else
        printf("Not same");
}

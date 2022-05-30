#include<stdio.h>
#include<stdbool.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Date getFisrtDay(int year)
{
    struct Date ans={1,1,year};
    return ans;
};
void printDate(struct Date date)
{
    printf("%d-%d-%d",date.day,date.month,date.year);
}
int main()
{
    struct Date date=getFisrtDay(2022);
    printDate(date);
}


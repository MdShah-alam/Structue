#include<stdio.h>
#include<stdbool.h>
struct Date
{
    int day;
    int month;
    int year;
};
bool isFirstDay(struct Date date)
{
    return date.day==1 && date.month==1;
};
int main()
{
    struct Date date={1,1,2022};
    if(isFirstDay(date))
    {
        printf("Happy new year");
    }
}

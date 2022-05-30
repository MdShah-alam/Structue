#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct Date today={25,5,2022};

    today=(struct Date){1,1,2000};

    printf("%d-%d-%d",today.day,today.month,today.year);
}

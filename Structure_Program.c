#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[30];
    int roll;
    double avg;
    struct Date dob;
};

void  print_date(struct Date date)
{
    printf("Birthday is : %d-%d-%d\n",date.day,date.month,date.year);
}

void print_info(struct Student *sp,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\nPrint the information of %d student\n",i+1);
        printf("Name : %s\n",sp[i].name);
        printf("Roll : %d\n",sp[i].roll);
        print_date(sp[i].dob);
        printf("YCGP :%.2lf\n",sp[i].avg);
    }
}

struct Date inputdate()
{
    struct Date dob;
    printf("dd-mm-yy :");
    scanf("%d %d %d",&dob.day,&dob.month,&dob.year);

    return dob;
};

struct Student input(struct Student *st, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\nEnter the %d information \n",i+1);
        printf("Enter the name :");
        gets(st[i].name);
        gets(st[i].name);
        printf("Enter the Roll :");
        scanf("%d",&st[i].roll);

        st[i].dob=inputdate();

        int a[3];
        double count=0;
        printf("Enter 3 sub marks :");
        for(int i=0; i<3; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0; i<3; i++)
        {
            if(a[i]>=80)
                count+=5;
            else if(a[i]>=70 || a[i]<80)
                count+=4;
            else if(a[i]>=60 || a[i]<70)
                count+=3.5;
            else if(a[i]>=50 || a[i]<60)
                count+=3;
            else
                count+=2.5;
        }
        st[i].avg=count/3;
    }
    return *st;
};

void sort(struct Student st2,struct Student *st,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(st[i].avg<st[j].avg)
            {
                st2=st[i];
                st[i]= st[j];
                st[j]=st2;
            }
        }
    }
    print_info(st,n);
}

int main()
{
    int n;
    printf("Enter the numbers of student :");
    scanf("%d",&n);
    struct Student a[n];

    struct Student a2;
    input(a,n);

    print_info(a,n);

    sort(a2,a,n);

    return 0;
}

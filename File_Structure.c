#include<stdio.h>

struct Student
{
    char name[20];
    int roll;

};

struct Student input(struct Student *st,int n)
{
    FILE *inputfile=fopen("input.txt","r");
    for(int i=0;i<n;i++)
    {
        fscanf(inputfile,"%s %d",&st[i].name,&st[i].roll);
    }

    fclose(inputfile);
    return *st;
};

void output(struct Student *st, int n)
{
    FILE *outputfile=fopen("output.txt","w");

    for(int i=0;i<n;i++)
    {
        fprintf(outputfile,"%s %d\n",st[i].name,st[i].roll);
    }
    fclose(outputfile);
}

int main()
{
    FILE *inputfile=fopen("input.txt","r");
    int n;
    fscanf(inputfile,"%d",&n);
    struct Student a[n];

    input(a,n);

    output(a,n);

    fclose(inputfile);

    return 0;
}

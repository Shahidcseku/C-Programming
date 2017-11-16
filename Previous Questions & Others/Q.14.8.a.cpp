#include<stdio.h>
int main()
{
    int i,j,gpa=0;
    struct cse
    {
        char name[20];
         int roll;
         int gpa;

    };
    struct cse s[3];

    for(i=0;i<3;i++)
    {
        scanf("%s %d %d",&s[i].name,&s[i].roll,&s[i].gpa);
    }

    for(i=0;i<3;i++)
    {
        if(s[i].gpa>gpa)
            {
                gpa=s[i].gpa;
            }
    }


    for(i=0;i<3;i++)
    {
        printf("%s %d %d\n",s[i].name,s[i].roll,s[i].gpa);

    }
    printf("\nHighest GPA is %d\n",gpa);
}

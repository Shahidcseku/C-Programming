#include<stdio.h>


int main()
{

struct student{

    int id;
    int batch;
    char name[20];

    }s[8];

for(int i =0;i<3;i++)
{
    printf("Enter name:\n");
    gets(s[i].name);            /// There is a problem with gets(), problem to use with scanf();
     printf("Enter id:\n");
    scanf("%d",&s[i].id);
    printf("Enter batch:\n");
    scanf("%d",&s[i].batch);
}


for(int i=0;i<3;i++)

    printf("Name: %s ID: %d and Batch: %d\n",s[i].name,s[i].id,s[i].batch);
}

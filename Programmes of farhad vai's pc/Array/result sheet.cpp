///RESULT OF 40 STUDENTS FOR 3 CLASS TESTS.

#include<stdio.h>
int main()

{
    int i,j,ct[39][4];
    printf("Enter roll no and marks of 3 class tests :\n");

    for(i=0;i<39;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&ct[i][j]);
        }
    }

    printf("\tRoll\tCT1\tCT2\tCT3\n\n");
    printf("\t___________________________\n\n");
    for(i=0;i<39;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",ct[i][j]);
        }
        printf("\n");
    }
    ///SEARCHING ///

    int s;
    printf("\n\n\nEnter a roll no for search:\n");
    scanf("%d",&s);
    for(i=0;i<39;i++)
    {

        if(s==ct[i][0])
        {
            for(j=0;j<4;j++)
            {
                printf("\t%d",ct[i][j]);

            }
            break;
        }
    }
}

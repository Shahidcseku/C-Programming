#include<stdio.h>
int main()

{
    int num=10;
    printf("%d ",20+ ++num);      /// part c (i)
    printf(" %d",30+num++);

    printf("\n\n\n");
    int x=10,y=20,z=100;         /// part c(ii)
    int max=(x>y)?z:y;
    printf("%d\n\n\n\n",max);

    int xx=10;
    float yy=10.05;
    //xx=yy%xx;                    /// question d
    if(10==xx)
    {
        printf("%d",xx);
    }
}

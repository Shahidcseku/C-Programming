#include<stdio.h>
int recurs();
int main()

{
    recurs();
}

int recurs()
{
    int i=0;

    printf("This is a recursive function.\n");
    recurs();
}

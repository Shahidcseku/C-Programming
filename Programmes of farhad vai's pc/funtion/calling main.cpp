#include<stdio.h>
int f1();
int main()

{
    printf("This message will print infinite times.\n");
    f1();
}
int f1()
{
    main();
}

#include<stdio.h>
int x=97;
void func()
{
    int x=65;
    printf("%d\n",x);
    printf("%c\n",x);
    ::x++;

}
int main()
{
    printf("%d\n",x);
    func();
    printf("%c\n",x);
}

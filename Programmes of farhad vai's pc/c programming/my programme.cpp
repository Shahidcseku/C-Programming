#include<stdio.h>
int main()
    {
        int num1,num2,add,substract,multiplie,divide;
        char sign;
        scanf(" %d",&num1);
        scanf(" %d",&num2);
        sign = getchar();
        add = num1 + num2;
        substract = num1-num2;
        multiplie = num1*num2;
        divide = num1/num2;
        printf(" The value of add is %d\n",add);
        printf(" The value of substract is %d\n",substract);
        printf(" The value of multiplie is %d\n",multiplie);
        printf(" The value of divide is %d\n",divide);
        return 0;
    }

#include<stdio.h>
int main()
    {
        int num1,num2,add,substract,multiple,devide;
        char sign;
        //dedicate it to my parents//

        printf("What do you want to do?\n");
        printf("Add, Substraction, Multiple, Devide?\n");
        printf("Enter the first letter:\n");
        sign=getchar();
        printf("\n");
        printf("Enter the first number:\n");
        scanf("%d",&num1);
        printf("Enter the second number:\n");
        scanf("%d",&num2);
        add= num1+num2;
        substract= num1-num2;
        multiple= num1*num2;
        devide= num1/num2;

        if(sign=='A' || sign=='a')
            printf("%d + %d =%d\n",num1,num2,add);
        if(sign=='S' || sign=='s')
            printf("%d - %d =%d\n",num1,num2,substract);
        if(sign=='M' || sign=='m')
            printf("%d * %d =%d\n",num1,num2,multiple);
        if(sign=='d' && num2!=0)
            printf("%d / %d =%d\n",num1,num2,devide);
            return 0;
    }

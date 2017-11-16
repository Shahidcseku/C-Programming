#include<stdio.h>
int main()
    {
        float x,f,s;
        printf("Enter x:\n");
        scanf("%f",&x);
        f=(x-5)*(x+2)/(x-2);
        s=(x+10)*(x-7)/(x-10);
        if(x<f && x>s){
            printf("The term is satiesfied.\n");
        }
        else{
            printf("The term is not satiesfied.\n");
        }
       return 0;
    }


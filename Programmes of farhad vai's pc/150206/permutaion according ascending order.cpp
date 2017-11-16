#include<stdio.h>
int main()
    {
       float j,k,l,m;
        printf("Enter number1:\n");
        scanf("%f",&j);
        printf("Enter number2:\n");
        scanf("%f",&k);
        printf("Enter number3:\n");
        scanf("%f",&l);
        printf("Enter number4:\n");
        scanf("%f",&m);
        float x;

        if(j<k && j<l && j<m){
            x=j;
        }
        else if(k<j && k<l && k<m){
            x=k;
        }
        else if(l<j && l<k && l<m){
            x=l;
        }
        else{
            x=m;
        }
        printf("%f",x);
    }

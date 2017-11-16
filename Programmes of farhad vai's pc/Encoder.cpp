#include<stdio.h>
int main()
{
        int ch;
        printf("Enter 1 for encoding 2 for decoding.\n");
        scanf("%d",&ch);
        if(ch==1)

        {
            char a,b,c,d,e,f;
            printf("Enter a word(less than 6 character):");
            scanf("%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f);
            printf("The encoded word is %c%c%c%c%c%c",a+5,b+5,c+5,d+5,e+5,f+5);
        }
    else
        {
             char a,b,c,d,e,f;
            printf("Enter encoded word(less than 6 character):");
            scanf("%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f);
            printf("The decoded word is %c%c%c%c%c%c",a-5,b-5,c-5,d-5,e-5,f-5);
        }
}

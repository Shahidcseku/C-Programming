#include<stdio.h>
int main()
{
    int i1,j1,k1,i2,j2,k2,x,y;
    int s1,s2,s3,s4,s5,r1,r2;
    printf("Enter the value of x1 y1 and z1:");
    scanf("%d %d %d",&i1,&j1,&k1);
    printf("Enter the value of x2 y2 and z2:");
    scanf("%d %d %d",&i2,&j2,&k2);


    s1=i1+i2;
    s2=j1+j2;
    s3=k1+k2;
    s4=(s3-s2)/s1;
    s5=(s3-s1)/s2;
     r1=i1*s4+j1+k1;
     r2=i2+j2*s5+k2;


     printf("x= %d\n",r1);
     printf("y= %d",r2);


}

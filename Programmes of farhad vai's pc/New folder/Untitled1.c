///10083

#include<stdio.h>
#include<math.h>
int main()

{
    double t,a,b,res;
    scanf("%lf %lf %lf",&t,&a,&b);
    res= (pow(t,a)-1)/(pow(t,b)-1);
    printf("%lf",res);


}

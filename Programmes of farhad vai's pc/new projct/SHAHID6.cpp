#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks for \n1.Banga\n2.Engish\n3.Physics\n4.Chemistry\n5.Math\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
     if(( a || b || c || d || e) >=80) printf("A+\n");
      if( (a || b || c || d || e) >=70 &&(a || b || c || d || e)<80) printf("A\n");
       if(( a || b || c || d || e) >=60 && (a || b || c || d || e)<70) printf("A-\n");
        if( (a || b || c || d || e) >=50 && (a || b || c || d || e)<60) printf("B\n");
         if( (a || b || c || d || e) >=40 && (a || b || c || d || e)<50) printf("C\n");
          if( (a || b || c || d || e) <40) printf("F");

}

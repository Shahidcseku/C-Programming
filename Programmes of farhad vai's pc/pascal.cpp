       for(i=1;i<=n;i++)
       {
           fact=fact*i;
       }
     //  printf("n=%d\n",fact);
       int fact1,fact2;
       for(r=1;r<=n;r++)
       {
           x=n-r;
           fact1=1,fact2=1;
           for(j=1;j<=r;j++)
           {
               fact1=fact1*j;
           }
         //   printf("r=%d.   ",fact1);
        for(k=1;k<=x;k++)
        {
            fact2=fact2*k;
        }
      //  printf("x= %d..",fact2);
        far=fact/(fact1*fact2);
        printf("%d      ",far);

       }

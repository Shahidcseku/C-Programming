#include <stdio.h>

int main()
{
    int b, p;
    float mul = 1.0;
    scanf("%d %d", &b, &p);

    if(p>0)
    {
        for(int i = 1; i <= p; i++)
        {
            mul *= b;
        }
    }
    else if(p<0)
    {p=p*-1;

        for(int i = 1; i <= p; i++)
        {
            mul *= b;
        }N
    }

    printf("%.10f", (1/mul));

    return 0;
}

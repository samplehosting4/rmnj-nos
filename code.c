/*Created by Md Sharique on the date sat 27.4.2019...
with the help of google*/
//input a limit and get all ramanujan numbers with explanations upto the limit
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,a3,b3,c3,d3;
    long unsigned int n;
    printf("Enter a limit of numbers:");
    scanf(" %lu",&n);
    for(a=1;a<=n;a++) //starting of main loop
    {
        a3=a*a*a;
        if(a3>n)
        break;
        for(b=a;b<=n;b++)//starting of second loop
        {
            b3=b*b*b;
            if(a3+b3>n)
            break;
            for(c=a+1;c<=n;c++)
            {
                c3=c*c*c;
                if(c3>a3+b3)
                break;
                for(d=c;d<=n;d++)
                {
                    d3=d*d*d;
                    if(c3+d3>a3+b3)
                    break;
                    if(c3+d3==a3+b3)
                    {
                        printf("\n%d=%d^3+%d^3=%d^3+%d^3\n",(a3+b3),a,b,c,d);
                    }
                }
            }
        }
    }
    return 0;
     getch();
}

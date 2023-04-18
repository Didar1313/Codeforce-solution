#include<stdio.h>
int main()
{
    int n,a,b,i,t,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        sum=a+b;
        t=sum/4;
 
        if((a-t>=0) && (b-t)>=0)
        {
            printf("%d\n",t);
        }
        else
        {
            if(a<t)
                t=a;
            else
                t=b;
            printf("%d\n",t);
        }
    }
    return 0;
 
}
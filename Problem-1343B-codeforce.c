#include<stdio.h>
int main()
{
    int n,i,a,d=0,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int e=0,o=0;
        scanf("%d",&a);
        d=a/2;
        if(d%2!=0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            for(j=2; j<=a; j+=2)
            {
                printf("%d ",j);
                e+=j;
 
            }
            for(j=1; j<a-2; j+=2)
            {
                printf("%d ",j);
                o+=j;
            }
            printf("%d\n",e-o);
        }
        printf("\n");
 
    }
    return 0;
 
 
}
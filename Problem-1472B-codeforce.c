#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int d,j,w=0,k=0,sum=0,min=0,s1=0,s2=0;
 
        scanf("%d",&d);
        int s[100];
 
        for(j=1; j<=d; j++)
        {
            scanf("%d",&s[j]);
            if(s[j]==1)
            {
                s1++;
            }
            if(s[j]==2)
            {
                s2++;
            }
            sum+=s[j];
 
        }
        if(sum%2!=0)
        {
            printf("NO\n");
 
            continue;
        }
        if(s2%2!=0)
        {
            if(s1==0)
            {
                printf("NO\n");
                continue;
            }
        }
        printf("YES\n");
 
 
    }
    return 0;
}

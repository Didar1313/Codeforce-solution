#include<stdio.h>
int main()
{
    int t,n,a[100];
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int c = 0,flag = 0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int odd = 0,even = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2 != a[i] % 2)
            {
                if(a[i] % 2 == 1)odd++;
                else even++;
            }
        }
        if(odd != even)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",even);
        }
    }
    return 0;
}
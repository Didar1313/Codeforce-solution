#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s[n+1],k=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
    }
    for(int i=1; i<n; i++)
    {
        if((s[i]==0 && (s[i-1]==1 && s[i+1]==1)))
        {
            k++;
            i+=2;
        }
    }
    printf("%d\n",k);
    return 0;
}

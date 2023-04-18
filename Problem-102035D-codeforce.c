#include<stdio.h>
int main()
{
    int n,a,b,s;
    scanf("%d%d%d%d",&n,&a,&b,&s);
    n-=1;
    if((a*n)+b>s || (b*n)+a<s)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
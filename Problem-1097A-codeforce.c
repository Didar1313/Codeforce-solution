#include<stdio.h>
int main ()
{
    char s[3],d[6];
    gets(s);
    int sum=0;
    for(int i=1; i<=5; i++)
    {
        scanf("%s",d);
        if(s[0]==d[0] || s[1]==d[1])
        {
            sum++;
            break;
        }
    }
    if(sum==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
 
}

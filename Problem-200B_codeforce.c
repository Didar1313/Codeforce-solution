#include<stdio.h>
int main()
{
    float sum=0.0;
    int n,i;
    scanf("%d",&n);
    int s[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
        sum=sum+s[i];
    }
 
    printf("%f\n",sum/n);
    return 0;
}
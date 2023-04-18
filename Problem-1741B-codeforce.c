#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        int sum=0;
        int s[a+1];
        for(int j=0; j<a; j++)
        {
            scanf("%d",&s[j]);
        }
        int max=0;
        for(int l=0; l<a; l++)
        {
            for(int m=0; m<a; m++){
                if(s[m]<s[l]){
                    max=s[l];
                    s[l]=s[m];
                    s[m]=max;
                }
            }
        }
        for(int d=0; d<a; d++){
                if(s[d]==s[d+1]){
                    sum=1;
                    break;
                }
        }
        if(sum==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
 
    }
    return 0;
}

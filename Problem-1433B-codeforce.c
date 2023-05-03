#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int s[n],get_first_one=0,get_last_one=0;
        for(int i=0; i<n; i++){
            scanf("%d",&s[i]);
        }
        for(int i=0; i<n; i++){
            if(s[i]==1){
                get_first_one=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]==1){
                get_last_one=i;
                break;
            }
        }
        int c=0;
        for(int i=get_first_one; i<=get_last_one; i++){
            if(s[i]==0){
                c++;
            }
        }
        printf("%d\n",c);
    }

    return 0;
}

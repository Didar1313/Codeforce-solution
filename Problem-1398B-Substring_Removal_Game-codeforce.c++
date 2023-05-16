#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[105];
        cin>>s;
        int len=0,count=0,j=0;
        len=strlen(s);
        int d[len];

        for(int i=0; i<len; i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                if(count>0){
                    d[j++]=count;
                    count=0;
                }
            }
        }
        if(count>0){
            d[j++]=count;
        }
        sort(d,d+j);
        int result=0;
        for(int i=j-1; i>=0; i--){
            result+=d[i];
            i--;
        }
        cout<<result<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int s[n],d[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        sort(s,s+n);
        for(int i=0; i<n; i++){
            cin>>d[i];
        }
        sort(d,d+n);
        int temp=0;
        for(int i=0; i<k; i++){
            for(int j=n-1; j>=0; j--){
                if(s[i]<d[j]){
                    temp=s[i];
                    s[i]=d[j];
                    d[j]=temp;
                    
                }
            }
        }
        int result=0;
        for(int i=0; i<n; i++){
            result+=s[i];
        }
        cout<<result<<endl;
        
    }
    return 0;
}
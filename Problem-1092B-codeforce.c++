#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    sort(s,s+n);
    int sum=0,result=0;
    for(int i=0; i<n; i++){
        result=s[i+1]-s[i];
        sum+=result;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
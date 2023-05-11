#include<iostream>
#include<set>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d=0;

        cin>>n;
        vector<int>s(n+1);
        for(int i=1; i<=n; i++){
            cin>>s[i];
            d= __gcd(d,s[i]);
        }
        sort(s.begin()+1,s.end());
        cout<<(s[n])/d<<endl;
    }
    return 0;
}
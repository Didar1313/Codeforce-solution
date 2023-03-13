#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

typedef long long ll;
int main(){
    int n;
    ll s[1000005];
    cin>>n;
    for(int i=0; i<n; i++){
        int m,r=1;
        cin>>m;
        for(int j=0; j<m; j++){
            cin>>s[j];
        }
        sort(s,s+m);
        for(int k=1; k<m; k++){
            r+=s[k] !=s[k-1];
        }
        cout<<r<<'\n';
    }
}
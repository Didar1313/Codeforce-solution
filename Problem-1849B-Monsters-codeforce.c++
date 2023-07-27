#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b;
        set<pair<int, int>>s;
        for(int i=1; i<=a; i++){
            int x;
            cin>>x;
            x%=b;
            s.insert({x,i});
        }
        for(auto [m,n]:s){
            cout<<n<<" ";
        }
        cout<<endl;
    }

    return 0;
}

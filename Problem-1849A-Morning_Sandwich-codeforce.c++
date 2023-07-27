#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int result = b+c;
        if((a-1)>=result){
            cout<<result+result+1<<endl;
        }
        else{
            cout<<a+a-1<<endl;
        }
    }

    return 0;
}

#include<iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>s(n);
        for(ll i=0; i<n; i++){
            cin>>s[i];
        }
        reverse(s.begin(),s.end());
        while(!s.empty() && s.back()==0){
            s.pop_back();
        }
        if(s.empty()){
            cout<<"0"<<endl;
            continue;
        }
        reverse(s.begin(),s.end());
        ll size=s.size();
        ll result=0;
        for(ll i=0; i<size-1; i++){
            if(s[i]==0){
                result+=1;
            }
            else{
                result+=s[i];
            }
        }
        cout<<result<<endl;
    }
    return 0;
}

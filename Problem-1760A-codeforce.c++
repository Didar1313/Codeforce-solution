#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
       ll s[3];
       for(int i=0; i<3; i++){
        cin>>s[i];
       }
       sort(s,s+3);
       cout<<s[1]<<endl;
    }
    return 0;
}
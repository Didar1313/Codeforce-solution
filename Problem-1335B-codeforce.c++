#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        string s;
        for(int i=0; i<a; i++){
            char d =97+(i%c);
            s+=d;
        }
        cout<<s<<endl;
    }
    return 0;
}
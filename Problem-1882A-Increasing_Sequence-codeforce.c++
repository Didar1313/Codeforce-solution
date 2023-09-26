#include<iostream>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n; 
        ll count=1;
        ll b;
        for(int i=1; i<=n; i++){
            cin>>b;
            if(count==b){
                count++;
            }
            count++;
        }
        cout<<count-1<<endl;
    }
    return 0;
}
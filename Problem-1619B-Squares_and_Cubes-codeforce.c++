#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,sum=0;
        cin>>n;
        set<int> s;
        for(int i=1; i*i<=n; i++){
            s.insert(i*i);
        }
        for(int i=1; i*i*i<=n; i++){
            s.insert(i*i*i);
        }
        
        cout<<(int)s.size()<<endl;
    }
    return 0;
}
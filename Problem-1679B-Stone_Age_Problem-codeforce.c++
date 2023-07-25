#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
map<long long,long long>s;

int main(){
    ll n,q,a;
    cin>>n>>q;
    ll sum=0;
    for(ll i=1; i<=n; i++){
        cin>>s[i];
        sum+=s[i];
    }
    while(q--){
        ll k;
        cin>>k;
        if(k==1){
            ll m,p;
            cin>>m>>p;
            
            if(s.find(m)==s.end()){
                s[m]=a;   
                /*
                here we add value of 'a', beacause when clear the map,all indexing value are 0.
                so,when we try to sub 'm' number indexing value it doesn't sub cause s[m]=0,so for 
                solving this issue we need to add value of 'a',cause all(n) index are mul by 'a'.so,all array
                elements are equal to 'a'.that's we need this statement here.

                here,s.find(m) indicate the position of the index,and s.end() indicate there is nothing.
                */
                
            }
            
            sum=sum-s[m];
            s[m]=p;
            sum=sum+s[m];
            cout<<sum<<endl;

        }
        else{
            cin>>a;
            sum=n*a;
            cout<<sum<<endl;
            s.clear();
        }
    }
    return 0;

}
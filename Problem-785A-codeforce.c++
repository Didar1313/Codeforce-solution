#include<iostream>
using  namespace std;
typedef long long ll;
int main(){
    ll n,count=0;
    cin>>n;
    for(ll i=0; i<n; i++){
        string a;
        cin>>a;
        if(a=="Icosahedron"){
            count+=20;
        }
        if(a=="Cube"){
            count+=6;
        }
        if(a=="Octahedron"){
            count+=8;
        }
        if(a=="Dodecahedron"){
            count+=12;
        }
        if(a=="Tetrahedron"){
            count+=4;
        }
    }
    cout<<count<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum_x=0,sum_y=0,sum_z=0;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0; i<n; i++){
        cin>>x[i] >> y[i] >> z[i];
        sum_x+=x[i];
        sum_y+=y[i];
        sum_z+=z[i];
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
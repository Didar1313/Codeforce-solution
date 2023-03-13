#include<iostream>
using namespace std;
int main(){
    int n;
    long long int sum[3];
    cin>>n;
    for(int i=0; i<3; i++){
        sum[i]=0;
        for(int j=0; j<n-i; j++){
            int temp;
            cin>>temp;
            sum[i]+=temp;
        }
    }
    cout<<sum[0]-sum[1]<<endl<<sum[1]-sum[2]<<endl;
    return 0;
}
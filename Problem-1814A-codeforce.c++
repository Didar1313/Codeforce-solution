#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        if(k==1){
            cout<<"YES"<<endl;
        }
        else if(n%2==0 && k%2==0){
            cout<<"YES"<<endl;
        }
        else if(n%2==0 && k%2!=0){
            if((n/2)>=k || n%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(n%2!=0 && k%2!=0){
            cout<<"YES"<<endl;
        }
        else if(n%2!=0 && k%2==0){
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if(n%2==0){
            ll ede=2;
            for(ll i=1; i<=n; i++){
                cout<<ede<<" ";
                ede+=2;
            }
        }
        else{
            for(ll i=1; i<=n; i++){
                cout<<i<< " ";
            }
        }
        cout<<endl;
    }

    return 0;
}

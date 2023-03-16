#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        if(t == 3){
            cout << "1\n";
        } 
        else{
            int sum=0;
            sum=t/2 - t%2;
            cout << sum << '\n';
        } 
    }
}
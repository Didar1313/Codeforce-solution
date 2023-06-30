#include <iostream>
typedef long long ll;
using namespace std;
signed main() {

    int numTestCases;

    cin >> numTestCases;

    while (numTestCases--) {
        ll num;
        ll sum = 0;

        cin >> num;

        while (num) {
            sum += num;
            num /= 2;
        }

        cout<< sum <<endl;

    }

    return 0;
}


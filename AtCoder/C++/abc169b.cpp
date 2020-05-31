#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, a, ans;
    cin >> n;

    cin >> ans;

    for (int i=0; i<n-1; i++) {
        cin >> a;
        if (a == 0) {
            ans = 0;
            break;
        }
        if (ans != -1) {
            if (ans*a < ans || ans*a >= 1000000000000000001) {
                ans = -1;
            } else {
                ans = ans * a;
            }
        }      
    } 

    cout << ans << endl;
}
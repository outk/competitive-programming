#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;

    ll a;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (i%2 == 0) {
            if (a%2 == 1) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
}
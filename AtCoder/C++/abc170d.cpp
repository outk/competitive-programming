#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());

    ll ans = 0;

    vector<ll>::iterator low,up;

    ll ind = 0;

    for (int i=0; i<n; i++) {
        ll k = 1;
        bool findbool = false;
        while (k <= sqrt(a.at(i))) {
            if (a.at(i)%k == 0 && a.at(i)/k > 0) {
                low = lower_bound(a.begin(), a.end(), k);
                ind = low - a.begin();
                if ((ind != i && a.at(ind) == k) || (ind != n-1 && a.at(ind+1) == k)) {
                    findbool = true;
                    break;
                }
                low = lower_bound(a.begin(), a.end(), a.at(i)/k);
                ind = low - a.begin();
                if ((ind != i && a.at(ind) == a.at(i)/k) || (ind != n-1 && a.at(ind+1) == a.at(i)/k)) {
                    findbool = true;
                    break;
                }
            }
            k++;
        }
        if (!findbool) ans++;
    }

    cout << ans << endl;

}
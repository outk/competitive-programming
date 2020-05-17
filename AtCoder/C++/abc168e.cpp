#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    static const ll inf = 1000000007;

    ll n;
    cin >> n;

    vector<double> adivb(n, 0), bdiva(n, 0);
    for (int i=0; i<n; i++) {
        double a, b;
        cin >> a >> b;
        if (a != 0 && b != 0) {
            adivb.at(i) = a/b;
            bdiva.at(i) = b/a;
        }
    }

    sort(adivb.begin(), adivb.end());
    sort(bdiva.begin(), bdiva.end());

    ll ans = n;

    vector<ll> prevcal(n);
    ll k = 1;
    for (int i=0; i<n; i++) {
        prevcal.at(i) = k;
        k *= 2;
        k = k%inf;
    }

    for (int i=0; i<n; i++) {
        if (adivb.at(i) != 0) {
            vector<double>::iterator low,up;
            low = lower_bound(bdiva.begin(), bdiva.end(), -adivb.at(i));
            up = upper_bound(bdiva.begin(), bdiva.end(), -adivb.at(i));
            ll m = n - 1 - i;
            if (low - bdiva.begin() > i) {
                m -= (ll) (up - low);
            } else {
                if (up - bdiva.begin() > i) {
                    m -= (ll) (up - bdiva.begin());
                    m += i;
                }
            }
            if (adivb.at(i) == 1) m++;
            ans += prevcal.at(m-1);
            ans = ans%inf;
        }
    }



    cout << ans << endl;
}
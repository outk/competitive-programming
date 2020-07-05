#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;

    ll mod = 1000000007;

    vector<ll> apos, aneg;
    ll a;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a > 0) {
            apos.push_back(a);
        } else {
            aneg.push_back(-a);
        }
    }

    sort(apos.begin(), apos.end());
    sort(aneg.begin(), aneg.end());

    ll negind = aneg.size() - 1, posind = apos.size() - 1;

    ll ans = 1;

    if ((apos.size() == 0 && k%2) || (n-k == 0 && aneg.size()%2)) {
        if (apos.size() == 0 && k%2) {
            for (int i=0; i<k; i++) {
                ans *= aneg.at(i);
                ans = ans % mod;
            }
            ans = - ans;
        } else {
            if ((ll) (apos.size() + aneg.size()) == k) {
                for (int i=0; i<(ll)apos.size(); i++) {
                    ans *= apos.at(i);
                    ans = ans % mod;
                }
                for (int i=0; i<(ll)aneg.size(); i++) {
                    ans *= aneg.at(i);
                    ans = ans % mod;
                }
                ans = - ans;
            } else {
                ans = 0;
            }
        }
    } else {
        while (k > 0) {
            if (k >= 2) {
                if (posind > 0 && negind > 0) {
                    if (apos.at(posind)*apos.at(posind-1) > aneg.at(negind)*aneg.at(negind-1)) {
                        ans *= apos.at(posind);
                        ans = ans % mod;
                        posind--;
                        k--;
                        continue;
                    } else {
                        ans *= aneg.at(negind);
                        ans = ans % mod;
                        ans *= aneg.at(negind-1);
                        ans = ans % mod;
                        negind -= 2;
                    }
                } else if (posind > 0 && negind <= 0) {
                    ans *= apos.at(posind);
                    ans = ans % mod;
                    ans *= apos.at(posind-1);
                    ans = ans % mod;
                    posind -= 2;
                } else if (posind <= 0 && negind > 0) {
                    ans *= aneg.at(negind);
                    ans = ans % mod;
                    ans *= aneg.at(negind-1);
                    ans = ans % mod;
                    negind -= 2;
                } else if (posind == 0 && negind == 0) {
                    if (n - k != 0) {
                        ans = 0;
                        break;
                    } else {
                        ans *= apos.at(0);
                        ans = ans % mod;
                        ans *= -aneg.at(0);
                        ans = ans % mod;
                        break;
                    }
                }
                k -= 2;
            } else {
                if (posind >= 0) {
                    ans *= apos.at(posind);
                    ans = ans % mod;
                    posind--;
                } else {
                    if (negind < 0) {
                        ans = 0;
                    } else {
                        ans *= -aneg.at(negind);
                        ans = ans % mod;
                        negind--;
                    }
                }
                k -= 1;
            }
        }
    }

    

    while (ans < 0) {
        ans += mod;
        ans = ans % mod;
    }
    
    cout << ans << endl;
}
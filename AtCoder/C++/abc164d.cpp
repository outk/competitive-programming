#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;

    ll n = s.size();

    vector<ll> sva(n);

    for (int i=0; i<n; i++) {
        sva.at(i) = s.at(i) - '0';
    }

    ll ans = 0;

    for (int l=0; l<n-4; l++) {
        for (int r=l+3; r<n-1; r++) {
            ll tmp = 0;
            for (int h=0; h<r-l+1; h++) {
                tmp += pow(10, h) * sva.at(r-h);
            }
            vector<ll>::const_iterator first = sva.begin() + l;
            vector<ll>::const_iterator last = sva.begin() + r+1;
            vector<ll> sv(first, last);
            for (int i=r-l+1; i>4; i--) {
                tmp = sv.at(i-1) + sv.at(i-2)*10 + sv.at(i-3)*100;
                tmp = tmp - 2*sv.at(i);
                sv.at(i-3) = tmp/100;
                sv.at(i-2) = tmp/10 - sv.at(i-3)*10;
                sv.at(i-1) = tmp - sv.at(i-3)*100 - sv.at(i-2)*10;
            }
            if (tmp%2019 == 0) ans++;
        }
    }

    cout << ans << endl;

}
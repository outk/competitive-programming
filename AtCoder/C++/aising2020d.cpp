#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll startindex = n%63;

    string x;
    cin >> x;

    ll cn = 0;
    for (int i=0; i<n; i++) {
        if (x.at(i)) cn++;
    }

    for (int i=0; i<n; i++) {
        ll c = cn;
        ll ans = 0;
        string bitx;
        if (x.at(i) == '0') {
            bitx = "1";
            c++;
        } else {
            bitx = "0";
            c--;
        }
        if (c) {
            string xtmp = x.substr(0, i) + bitx + x.substr(i+1, n-1-i);
            if (n > 63) {
                ll xsub = stoll(xtmp.substr(0, startindex), 0, 2);
                for (int j=startindex; j<n; j+=63) {
                    xsub <<= 63;
                    xsub += stoll(xtmp.substr(j, 63), 0, 2);
                    if (xsub/c > 0) {
                        xsub = xsub%c;
                    }
                }
                ans++;
                ll a = xsub;
                while (a) {
                    c = 0;
                    ll atmp = a;
                    while (atmp) {
                        if (atmp%2) c++;
                        atmp >>= 1;
                    }
                    a = a%c;
                    ans++;
                }
            } else {
                ll a = stoll(xtmp, 0, 2);
                while (a) {
                    c = 0;
                    ll atmp = a;
                    while (atmp) {
                        if (atmp%2) c++;
                        atmp >>= 1;
                    }
                    a = a%c;
                    ans++;
                }
            }
        } else {
            ans = 0;
        }
        
        
        cout << ans << endl;

    }
}
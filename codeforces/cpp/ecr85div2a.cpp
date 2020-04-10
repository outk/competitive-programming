#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n;
        cin >> n;

        string ans = "YES";

        ll prevp, p, prevc, c;
        cin >> prevp >> prevc;
        if (prevp < prevc) ans = "NO";
        for (int i=0; i<n-1; i++) {
            cin >> p >> c;
            if (prevp > p) ans = "NO";
            if (prevc > c) ans = "NO";
            if (p < c) ans = "NO";
            if (p-prevp < c-prevc) ans = "NO";
            prevp = p;
            prevc = c;
        } 

        cout << ans << endl;
    }
}
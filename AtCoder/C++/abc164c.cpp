#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    set<string> s;
    string st;
    ll ans = 0;
    for (int i=0; i<n; i++) {
        cin >> st;
        if (!s.count(st)) {
            ans++;
            s.insert(st);
        }
    }

    cout << ans << endl;

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int a,b,c;
        cin >> a >> b >> c;

        int ans=0;

        if (a) {
            ans++;
            a--;
        }
        if (b) {
            ans++;
            b--;
        }
        if (c) {
            ans++;
            c--;
        }

        if (a >= 3 && b >= 3 && c >= 3) ans += 4;
        else if (a*b*c == 0) {
            if (a*b != 0 || b*c != 0 || a*c != 0) ans++;
        } else if (a*b*c == 1) ans++;
        else if (a >= 2 && b >= 2 && c >= 2) ans += 3;
        else ans += 2;

        cout << ans << endl;
    }
}
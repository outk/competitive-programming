#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        string s;
        cin >> s;

        s = 'R' + s + 'R';

        int n = s.size();

        int ans = 0, prev=0;

        for (int i=1; i<n; i++) {
            if (s.at(i) == 'R') {
                if (i-prev > ans) ans = i - prev;
                prev = i;
            }
        }

        cout << ans << endl;

    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l=0, r=0;
    cin >> n;

    string s, ans;
    cin >> s;

    for (int i=0; i<n; i++) {
        if (s.at(i) == '(') r++;
        else {
            if (r > 0) r--;
        }

        if (s.at(n-1-i) == ')') l++;
        else {
            if (l > 0) l--;
        }
    }

    ans = string(l, '(') + s + string(r, ')');

    cout << ans << endl;
}
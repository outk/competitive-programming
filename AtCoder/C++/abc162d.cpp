#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vector<vector<ll>> rgb(n, vector<ll>(3, 0));
    if (s.at(0) == 'R') rgb.at(0).at(0)++;
    else if (s.at(0) == 'G') rgb.at(0).at(1)++;
    else rgb.at(0).at(2)++;
    for (int i=1; i<n; i++) {
        if (s.at(i) == 'R') {
            rgb.at(i).at(0) = rgb.at(i-1).at(0)+1;
            rgb.at(i).at(1) = rgb.at(i-1).at(1);
            rgb.at(i).at(2) = rgb.at(i-1).at(2);
        }
        else if (s.at(i) == 'G') {
            rgb.at(i).at(0) = rgb.at(i-1).at(0);
            rgb.at(i).at(1) = rgb.at(i-1).at(1)+1;
            rgb.at(i).at(2) = rgb.at(i-1).at(2);
        }
        else {
            rgb.at(i).at(0) = rgb.at(i-1).at(0);
            rgb.at(i).at(1) = rgb.at(i-1).at(1);
            rgb.at(i).at(2) = rgb.at(i-1).at(2)+1;
        }
    }

    ll ans = 0;
    for (int i=1; i<n-1; i++) {
        if (s.at(i) == 'R') {
            ans += rgb.at(i).at(1)*(rgb.at(n-1).at(2)-rgb.at(i).at(2));
            ans += rgb.at(i).at(2)*(rgb.at(n-1).at(1)-rgb.at(i).at(1));
            ll c = i;
            if (n-1-i < i) c = n-1-i;
            for (int j=1; j<=c; j++) {
                if ((s.at(i-j) == 'G' && s.at(i+j) == 'B') || (s.at(i-j) == 'B' && s.at(i+j) == 'G')) ans--;
            }
        }
        else if (s.at(i) == 'G') {
            ans += rgb.at(i).at(0)*(rgb.at(n-1).at(2)-rgb.at(i).at(2));
            ans += rgb.at(i).at(2)*(rgb.at(n-1).at(0)-rgb.at(i).at(0));
            ll c = i;
            if (n-1-i < i) c = n-1-i;
            for (int j=1; j<=c; j++) {
                if ((s.at(i-j) == 'R' && s.at(i+j) == 'B') || (s.at(i-j) == 'B' && s.at(i+j) == 'R')) ans--;
            }
        }
        else {
            ans += rgb.at(i).at(0)*(rgb.at(n-1).at(1)-rgb.at(i).at(1));
            ans += rgb.at(i).at(1)*(rgb.at(n-1).at(0)-rgb.at(i).at(0));
            ll c = i;
            if (n-1-i < i) c = n-1-i;
            for (int j=1; j<=c; j++) {
                if ((s.at(i-j) == 'G' && s.at(i+j) == 'R') || (s.at(i-j) == 'R' && s.at(i+j) == 'G')) ans--;
            }
        }
    }
    cout << ans << endl;
}
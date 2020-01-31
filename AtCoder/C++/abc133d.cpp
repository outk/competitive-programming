#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    int ans=0;
    for (int j=0; j<n; j++) {
        if (j%2) ans -= a.at(n-1-j);
        else ans += a.at(n-1-j);
    }

    cout << ans << ' ';
    
    for (int i=0; i<n-1; i++) {
        ans = (a.at(i) - (ans/2))*2;
        cout << ans << ' ';
    }
}
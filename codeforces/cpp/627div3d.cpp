#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), d(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }
    for (int i=0; i<n; i++) {
        cin >> b.at(i);
    }
    
    for (int i=0; i<n; i++) {
        d.at(i) = a.at(i) - b.at(i);
    }

    sort(d.begin(), d.end());

    long long ans = 0;

    for (int i=0; i<n; i++) {
        if (d.at(i) <= 0) {
            vector<int>::iterator up;
            up = upper_bound(d.begin(), d.end(), -d.at(i));
            ans += n - (int) (up - d.begin());
            // cout << n - (int) (up - d.begin()) << endl;
        } else {
            ans += n-i-1;
        }
            
    }

    cout << ans << endl;
}
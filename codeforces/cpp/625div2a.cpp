#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> r(n);
    for (int i=0; i<n; i++) cin >> r.at(i);

    vector<int> b(n); 
    for (int i=0; i<n; i++) cin >> b.at(i);

    int rsum=0, bsum=0;

    for (int i=0; i<n; i++) {
        if (r.at(i)) {
            if (b.at(i) == 0) rsum++;
        } else {
            if (b.at(i)) bsum++;
        }
    }

    int ans=-1;
    if (rsum) {
        ans = bsum/rsum + 1;
    }

    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());

    int ans = 1;

    if (n%2) {
        if (a.at(0) == 0) {
            for (int i=1; i<n; i++) {
                if (a.at(i) == ((i+1)/2)*2) {
                    if (i%2 == 0) ans = ans * 2 % 1000000007;
                } else {
                    ans = 0;
                    break;
                }
            }
        } else {
            ans = 0;
        }
    } else {
        for (int i=0; i<n; i++) {
            if (a.at(i) == (i/2)*2 + 1) {
                if (i%2) ans = ans * 2 % 1000000007;
            } else {
                ans = 0;
                break;
            }
        }
    }

    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mod = 998244353;
    int n, k, tmpn;
    cin >> n >> k;
    tmpn = n;

    vector<int> p(n);
    for (int i=0; i<n; i++) {
        cin >> p.at(i);
    }

    long long ans = 0;
    for (int i=0; i<k; i++) {
        ans += tmpn;
        tmpn--;
    }

    cout << ans << " ";

    long long ansp=1;

    int left = 0, right = 0;

    for (int i=0; i<n; i++) {
        if (p.at(i) > n - k) {
            left = i;
            break;
        }
    }
    
    for (int i=0; i<n; i++) {
        if (p.at(n-1-i) > n - k) {
            right = n - 1 - i;
            break;
        }
    }

    long long c = 0;

    for (int i=left+1; i<=right; i++) {
        c++;

        if (p.at(i) > n - k) {
            ansp *= c;
            ansp = ansp % mod;
            c = 0;
        }
    }

    cout << ansp << endl;

}
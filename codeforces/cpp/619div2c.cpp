#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        unsigned long int n,m;
        cin >> n >> m;

        unsigned long int ans=0;
        if (m) {
            if (n/2 > m) ans = ((1+(n/(m+1)))*(2+(n/(m+1)))*m)/2 - (n/(m+1) - (n - (1+n/(m+1))*m))*(n/(m+1) + 1 - (n - (1+n/(m+1))*m))/2 + (n-(1+(n/(m+1))))*(n-(n/(m+1)))/2;
            else ans = m + n*(n-1)/2;
        } else {
            ans = 0;
        }

        cout << ans << endl;
    }
}
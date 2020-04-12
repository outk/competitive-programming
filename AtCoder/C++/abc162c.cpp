#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll a, ll b) {
  if(a < b) return f(b, a);
  ll r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main() {
    ll k, ans = 0;
    cin >> k;

    ans = k*(k+1)/2;

    for (int i=2; i<=k; i++) {
        for (int j=1; j<i; j++) {
            ans += 6*f(i, j);
        }
    }

    for (int i=3; i<=k; i++) {
        for (int j=2; j<i; j++) {
            for (int t=1; t<j; t++) {
                ll ab = f(j, t);
                ans += 6*f(i, ab);
            }
        }
    }

    cout << ans << endl;
}
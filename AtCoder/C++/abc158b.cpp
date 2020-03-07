#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n, a, b, ans;
    cin >> n >> a >> b;

    if (n%(a+b)) {
        if (n > (n/(a+b))*(a+b) + a) ans = a*(n/(a+b)) + a;
        else ans = a*(n/(a+b)) + n-(n/(a+b))*(a+b);
    } else {
        ans = a*(n/(a+b));
    }

    cout << ans << endl;
}
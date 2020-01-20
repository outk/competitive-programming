#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,t,sum=0, ai;
    cin >> k >> t;

    int a, amax, ans;
    cin >> amax;
    for (int i=0; i<t-1; i++) {
        cin >> a;
        if (amax < a) amax = a;
    }

    if (amax-1-k+amax > 0) cout << amax-1-k+amax << endl;
    else cout << 0 << endl;
}
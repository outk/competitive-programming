#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int x,y,a,b;
        cin >> x >> y >> a >> b;

        int ans=-1;
        if ((y-x)%(a+b) == 0) {
            if ((y-x)/(a+b) > 0) ans = (y-x)/(a+b);
        }

        cout << ans << endl;
    }
}
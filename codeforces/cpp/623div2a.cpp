#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int a,b,x,y, w=0, h=0;
        cin >> a >> b >> x >> y;

        int ans;
        if (a/2 > x) {
            if (b/2 > y) {
                if ((b-1-y)*a > (a-1-x)*b) ans = (b-1-y)*a;
                else ans = (a-1-x)*b;
            } else {
                if (y*a > b*(a-1-x)) ans = y*a;
                else ans = b*(a-1-x);
            }
        } else {
            if (b/2 > y) {
                if (b*x > (b-1-y)*a) ans = b*x;
                else ans = (b-1-y)*a;
            } else {
                if (a*y > x*b) ans = a*y;
                else ans = x*b;
            }
        }

        cout << ans << endl;
    }
}
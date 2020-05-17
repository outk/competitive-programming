#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    double a, b, h, m;
    static const double pi = 3.141592653589793;
    cin >> a >> b >> h >> m;

    double ans;

    double sr = 30.0 * h + 30.0*(m/60.0), lr = 360.0*(m/60.0);

    // cout << sr << endl;
    // cout << lr << endl;

    double d = abs(sr-lr);
    ans = sqrt(a*a + b*b - 2.0*a*b*cos(pi*(d/180.0)));
    
    cout << std::fixed << std::setprecision(15) << ans << endl;
}
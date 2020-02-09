#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    
    float p;
    vector<float> a(n+1);
    a.at(0) = 0.0000000;
    cin >> p;
    a.at(1) = (p+1.0000000)/2.0000000;
    for (int i = 2; i<n+1; i++) {
        cin >> p;
        a.at(i) = a.at(i-1) + (p+1.0000000)/2.0000000;
    }

    float ans=0.0000000;

    for (int i=0; i<n-k+1; i++) {
        if (a.at(i+k)-a.at(i) > ans) ans = a.at(i+k)-a.at(i);
    }

    cout << setprecision(10) << ans << endl;
}
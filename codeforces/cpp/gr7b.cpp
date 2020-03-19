#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long amax = 0, ex = 0, b;
    vector<long long> x(n), a(n);
    x.at(0) = 0;
    for (int i=0; i<n; i++) {
        cin >> b;

        if (b + amax < 0) {
            if (ex < amax - b) ex = (-1 * amax) - b;
        }
        a.at(i) = b + amax;

        if (amax < a.at(i)) amax = a.at(i);

    }
    
    for (int i=0; i<n; i++) {
        cout << a.at(i) + ex << " ";
    }
    cout << endl;

}
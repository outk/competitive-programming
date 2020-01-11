#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=0, k=0;
    cin >> n >> k;

    double r=0;
    vector<int> vec(n);
    for (int i=0; i<n; i++) {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end());

    for (int i=n-k; i<n; i++) {
        r += vec.at(i);
        r /= 2;
    }

    cout << fixed << setprecision(15) << r << endl;
}
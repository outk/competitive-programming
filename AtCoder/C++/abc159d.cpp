#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> va(n), ca(n, 0);
    long long a;
    for (int i=0; i<n; i++) {
        cin >> a;
        va.at(i) = a;
        ca.at(a-1)++;
    }

    long long ans = 0;

    for (int i=0; i<n; i++) {
        if (ca.at(i) > 1) {
            ans += ca.at(i) * (ca.at(i)-1) / 2;
        }
    }

    long long tmpans; 

    for (int i=0; i<n; i++) {
        tmpans = ans;
        if (ca.at(va.at(i)-1) > 1) {
            tmpans -= (ca.at(va.at(i)-1)-1);
        }
        cout << tmpans << endl;
    }
}
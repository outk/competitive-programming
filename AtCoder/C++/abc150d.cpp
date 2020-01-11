#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    long long c=0;
    while (a%b) {
        c = a%b;
        a = b;
        b = c;
    }
    return b;
}

long long lcm(long long a, long long b) {
    return (a*b)/gcd(a,b);
}


int main() {
    int n;
    long long m;
    cin >> n >> m;

    vector<long long> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    long long g=(a.at(0)/2);

    for (int i=1; i<n; i++) {
        if (g <= (a.at(i)/2)) {
            g = lcm(a.at(i)/2, g);
        } else {
            g = lcm(g, a.at(i)/2);
        }
    }

    long long ans=0;

    if (((m/(2.0*g))-0.5) < 0) cout << 0 << endl;
    else cout << (long long)((m/(2.0*g))-0.5) + 1 << endl;
}
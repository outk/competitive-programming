#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll ans = 0;
        
        if ((n/k)%2) {
            for (int i=0; i<k/2; i++) {
                map<char, int> m;
                ll mmax=0;
                for (int j=0; j<n/k; j++) {
                    if (m.find(s.at(j*k+i)) == m.end()) {
                        m[s.at(j*k+i)] = 1;
                    } else {
                        m[s.at(j*k+i)]++;
                        if (mmax < m[s.at(j*k+i)]) mmax = m[s.at(j*k+i)];
                    }
                    if (m.find(s.at(j*k+k-1-i)) == m.end()) {
                        m[s.at(j*k+k-1-i)] = 1;
                    } else {
                        m[s.at(j*k+k-1-i)]++;
                        if (mmax < m[s.at(j*k+k-1-i)]) mmax = m[s.at(j*k+k-1-i)];
                    }
                }
                ans += 2*(n/k)-mmax;
            }
            if (k%2) {
                map<char, int> m;
                ll mmax=0;
                for (int j=0; j<n/k; j++) {
                    if (m.find(s.at(j*k+(k/2))) == m.end()) {
                        m[s.at(j*k+(k/2))] = 1;
                    } else {
                        m[s.at(j*k+(k/2))]++;
                        if (mmax < m[s.at(j*k+(k/2))]) mmax = m[s.at(j*k+(k/2))];
                    }
                }
                ans += n/k-mmax;
            }
        } else {
            for (int i=0; i<k; i++) {
                map<char, int> m;
                ll mmax=0;
                for (int ii=0; ii<n/(2*k); ii++) {
                    for (int j=0; j<=ii; j++) {
                        if (m.find(s.at(j*k+i)) == m.end()) {
                            m[s.at(j*k+i)] = 1;
                        } else {
                            m[s.at(j*k+i)]++;
                            if (mmax < m[s.at(j*k+i)]) mmax = m[s.at(j*k+i)];
                        }
                    }
                }
                for (int ii=0; ii<n/(2*k); ii++) {
                    for (int j=0; j<=ii; j++) {
                        if (m.find(s.at((ii-j)*k+n/2+k-1-i)) == m.end()) {
                            m[s.at((ii-j)*k+n/2+k-1-i)] = 1;
                        } else {
                            m[s.at((ii-j)*k+n/2+k-1-i)]++;
                            if (mmax < m[s.at((ii-j)*k+n/2+k-1-i)]) mmax = m[s.at((ii-j)*k+n/2+k-1-i)];
                        }
                    }
                }
                ans += n/k-mmax;
            }
        }

        cout << ans << endl;
        
    }
}
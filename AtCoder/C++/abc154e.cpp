#include <bits/stdc++.h>
using namespace std;

int fact(int nnn) 
{ 
    int res = 1; 
    for (int i = 2; i <= nnn; i++) 
        res = res * i; 
    return res; 
} 

int nCr(int nn, int r) 
{ 
    return fact(nn) / (fact(r) * fact(nn - r)); 
} 

int main() {
    string n;
    cin >> n;
    int k;
    cin >> k;

    int N=n.length();

    long long ans=0, tmpans = nCr(N-1, k);
    for(int i=0; i<k; i++) tmpans = tmpans*9;
    ans += tmpans;

    if (k == 1) {
        int nt = n.at(0)-'0';
        ans += nt;
    } else if (k == 2) {
        int nt = n.at(0)-'0';
        ans += (N-1)*(nt-1)*9;
        int m0=N+1;
        for (int i=1; i<N; i++) {
            if (n.at(i) != '0') {
                m0 = i;
                break;
            }
        }
        int m0i = n.at(m0)-'0';
        if (N-m0-1 > 0) ans += 9*(N-m0-1) + m0i;
        else if (N-m0-1 == 0) ans += m0i;
    } else {
        int nt = n.at(0)-'0';
        ans += nCr(N-1, 2)*(nt-1)*9;
        int m0l=N+1;
        for (int i=1; i<N; i++) {
            if (n.at(i) != '0') {
                m0l = i;
                break;
            }
        }
        int m0li = n.at(m0l)-'0';
        if (N-m0l-1 > 0) {
            ans += 9*(N-m0l-1)*(m0li-1);
            int m0r=N+1;
            for (int i=m0l+1; i<N; i++) {
                if (n.at(i) != '0') {
                    m0r = i;
                    break;
                }
            }
            int m0ri = n.at(m0r)-'0';
            if (N-m0r-1 > 0) ans += 9*(N-m0r-1) + m0ri;
            else if (N-m0r-1 == 0) ans += m0ri;
        } else if (N-m0l-1 == 0) ans += m0li;
    }

    cout << ans << endl;
}
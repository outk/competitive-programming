#include <bits/stdc++.h>
using namespace std;

long long find_index(long long a, long long &m, vector<pair<long long, long long>> &v) {
    long long r=m-1, l=0, mid=(r+l)/2;
    while (r>=l) {
        if (v.at(mid).first < a) {
            l = mid + 1;
            mid = (r + l)/2;
        } else if (v.at(mid).first > a) {
            r = mid - 1;
            mid = (r + l)/2;
        } else {
            return v.at(mid).second;
        }
    }
}

int main() {
    long long n, m;
    cin >> n >> m;

    vector<long long> py(m);
    vector<pair<long long, long long>> spy(m);
    int p,y;
    for (int i=0; i<m; i++) {
        cin >> p >> y;
        py.at(i) = p*1000000 + y;
        spy.at(i).first = p*1000000 + y;
        spy.at(i).second = 0;
    }

    sort(spy.begin(), spy.end());

    spy.at(0).second = 1;

    for (int i=1; i<m; i++) {
        if ((spy.at(i-1).first/1000000) == (spy.at(i).first/1000000)) {
            spy.at(i).second = spy.at(i-1).second + 1;
        } else {
            spy.at(i).second = 1;
        }
    }

    vector<int> ansls(m);
    long long ind=0;

    for (int i=0; i<m; i++) {
        ind = find_index(py.at(i), m, spy);
        ansls.at(i) = (py.at(i)/1000000)*1000000 + ind;
    }

    int k=0, kk=0;

    for (int i=0; i<m; i++) {
        k = 0;
        kk = ansls.at(i)/1000000;
        while (kk) {
            k += 1;
            kk /= 10;
        }
        if (k == 1) cout << "00000" << ansls.at(i) << endl;
        if (k == 2) cout << "0000" << ansls.at(i) << endl;
        if (k == 3) cout << "000" << ansls.at(i) << endl;
        if (k == 4) cout << "00" << ansls.at(i) << endl;
        if (k == 5) cout << "0" << ansls.at(i) << endl;
        if (k == 6) cout << ansls.at(i) << endl;
    }
    
}
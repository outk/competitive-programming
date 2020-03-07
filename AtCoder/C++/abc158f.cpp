#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long inf = 998244353;

    vector<pair<long long, long long>> v(n);
    for (int i=0; i<n; i++) {
        cin >> v.at(i).first >> v.at(i).second;
    }

    sort(v.begin(), v.end());

    vector<int> rd(n, 1);
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (v.at(j).first <= v.at(i).first + v.at(i).second) {
                rd.at(i)++;
                if (v.at(i).second < v.at(j).first + v.at(j).second - v.at(i).first) v.at(i).second = v.at(j).first + v.at(j).second - v.at(i).first;
            }
            else break;
        }
    }

    long long ans = 1;
    for (int i=0; i<n; i++) {
        
    }

}
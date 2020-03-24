#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    map<long long, long long> mprev;

    long long ini;
    cin >> ini;
    for (int i=1; i<=sqrt(ini); i++) {
        if (ini%i == 0) {
            mprev[i] = 1;
            mprev[ini/i] = 1;
        }
    }

    long long a;
    cin >> a;

    for (int i=1; i<=sqrt(a); i++) {
        if (a%i == 0) {
            if (mprev.find(i) == mprev.end()) {
                mprev[i] = 1;
            } else {
                mprev[i]++;
            }
            if (i != a/i) {
                if (mprev.find(a/i) == mprev.end()) {
                    mprev[a/i] = 1;
                } else {
                    mprev[a/i]++;
                }
            }
        }
    }

    map<long long, long long> mnow = {};

    for (int i=0; i<n-2; i++) {
        cin >> a;

        mnow = {};

        for (map<long long, long long>::iterator it=mprev.begin(); it!=mprev.end(); ++it) {
            if (a%(it->first) == 0) {
                if (mprev.find(it->first) != mprev.end()) {
                    mnow[it->first] = mprev[it->first] + 1;
                }
            } else {
                if (mprev[it->first] == 2+i) {
                    mnow[it->first] = 2+i;
                }
            }
        }

        mprev = mnow;
    }

    long long anskey = 0;

    for (map<long long, long long>::iterator it=mprev.begin(); it!=mprev.end(); ++it) {
        // cout << it->first << " " << it->second << endl;
        if (it->first > anskey) anskey = it->first;
    }
    
    cout << anskey << endl;
}
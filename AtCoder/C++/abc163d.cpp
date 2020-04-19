#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1000000007;

vector<long long> factorial;
vector<long long> modInverseArray;
long long mmi(long long n) {
	if(modInverseArray.size() > n)
        return modInverseArray[n];
    // If Empty
	if(modInverseArray.size() == 0){
        // Value for 0 ignored and 1 is 1
        modInverseArray.push_back(0);
        modInverseArray.push_back(1);
    }
	for(long long i = modInverseArray.size(); i <= n; i++)
		modInverseArray.push_back((-(mod/i) * modInverseArray[mod % i]) % mod + mod);
    return modInverseArray[n];
}
long long findfac(long long a){
    if(factorial.size() > a)
        return factorial[a];
    if(factorial.size() == 0)
        factorial.push_back(1);
    for(long long i = factorial.size(); i <= a;i++)
        factorial.push_back((factorial[i-1]*i)%mod);
    return factorial[a];
}
long long nCk(long long n, long long k){
    return (k>=0 && k<=n && n>=0)?((findfac(n)*mmi(findfac(k))%mod)*mmi(findfac(n-k))%mod):-1;
}

int main() {
    ll n, k;
    cin >> n >> k;

    ll ans=1;
    for (int i=1; i<n+1; i++) {
        ans *= 2;
        ans = ans%mod;
    }

    ll ex = 0;
    ll num;
    if (k-1 < n+2-k) num = k-1;
    else num = n+2-k;
    for (int i=0; i<num; i++) {
        ex += nCk(n+1, i+1);
        ex = ex%mod;
    } 

    if (ans < ex) cout << mod + ans - ex << endl;
    else cout << ans - ex << endl;
    
}
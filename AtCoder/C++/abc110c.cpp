#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll (i)=0; i<(n); ++(i))
#define print(a) cout << (a) << endl

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s,t;cin>>s;cin>>t;
  bool is_possible=true; ll pos=0;
  vector<char> v(26,' '),v_(26,' ');
  rep(i,s.length()) {
    pos=t[i]-'a';
    if(v[pos]==' ') v[pos]=s[i];
    if(v[pos]!=' '&&v[pos]!=s[i]) {is_possible=false;break;}
  }
  if (is_possible) {
    rep(i,t.length()) {
      pos=s[i]-'a';
      if(v_[pos]==' ') v_[pos]=t[i];
      if(v_[pos]!=' '&&v_[pos]!=t[i]) {is_possible=false;break;}
    }
  }
  print(is_possible?"Yes":"No");
  return 0;
}

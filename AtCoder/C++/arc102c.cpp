#include<bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
	cin>>n>>k;
	int p=n/k,q=0;
	if (k%2==0)
		q=(n+k/2)/k;
	cout<<(long long)p*p*p+(long long)q*q*q;
}

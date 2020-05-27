// Aditya verma
#include<bits/stdc++.h>
#define rep(i,a,n) for(int i=a ; i<n ; i++)
#define per(i,a,n) for(int i=n-1 ; i>=a ;i--)
#define ff         first
#define ss         second
#define pb         push_back
#define mp         make_pair
#define vi         vector<int>
#define endl       '\n'
#define int        long long int
#define deb(x)     cerr<<#x<<" : "<<x<<"\n";
#define all(x)     x.begin(),x.end()
#define mod        1000000007

using namespace std;
int     gcd        (int a, int b) {return b ? gcd(b, a % b) : a;}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	float x = 1.0;

	int people = 0;
	float num = 365, denom = 365;

	float p;
	cin >> p;

	//corner case
	if (p == 1.0) {
		cout << "366\n";
	}
	while (x > 1 - p) {
		x *= (num / denom);
		num--;
		people++;
	}
	cout << people << endl;
	return 0;
}

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define int 					long long int
#define ld 					long double
#define mod 				1e9+7
#define ps(x,y)   			fixed<<setprecision(y)<<x
#define min_priority_queue  priority_queue<int,vector<int>,greater<int>>
#define endl        		"\n"
//Use endl wisely buffer flush
#define ordered_set tree<int, null_type , less<int> , rb_tree_tag , tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fun() {
	int a, b, c, m;
	cin >> a >> b >> c >> m;
	if (m == 0) {
		cout << "YES" << endl;
		return;
	}

	//Minimum do chahiye
	if (a >= 2) {
		a = a - 2;
		m--;
	}
	if (m and b >= 2) {
		b = b - 2;
		m--;
	}
	if (m and c >= 2) {
		c = c - 2;
		m--;
	}
	if (m) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	return;

}

int32_t main() {
	fastio;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		fun();

	}
	return 0;
}

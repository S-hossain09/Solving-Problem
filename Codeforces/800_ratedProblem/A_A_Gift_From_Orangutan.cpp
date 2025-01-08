/**
 *	author 	: SahilH
 **/

#include <bits/stdc++.h>
using namespace std;

// Types
#define ui unsigned int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define pii pair<int, int>

// Utils
#define endl "\n"
#define sp << " "
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define test(T) for (int t = 1; t <= T; ++t)
#define fastIO cin.tie(0)->sync_with_stdio(0)

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int minV = *min_element(arr.begin(),arr.end());
    int maxV = *max_element(arr.begin(),arr.end());

    cout << ((n-1)*maxV) - ((n-1)*minV) << endl;
}

int32_t main()
{
    fastIO;
    bool Q = true;
    int T = Q ? (cin >> T, T) : 1;
    test(T)
    {
        solve();
    }

    return 0;
}
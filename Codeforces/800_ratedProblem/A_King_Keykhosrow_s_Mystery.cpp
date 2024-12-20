/**
 *	author 	: SahilH
 **/

#include <iostream>
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
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= min(a, b); i++)
    {
        int ans = max(a, b) * i;

        if (ans >= min(a, b))
        {
            if (ans % a == ans % b)
            {
                cout << ans << endl;
                break;
            }
        }
    }
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
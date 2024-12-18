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

    int num, sum = 0, op = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;

        sum += num;

        int sq = sqrt(sum);
        if ((sq * sq == sum) && sum & 1)
            op++;
    }

    cout << op << endl;
}

int32_t main()
{
    fastIO;
    bool Q = true;
    int T = Q ? (cin >> T, T) : 1;
    test(T)
    {
        solve();
        /*
            Hello Tasnim
        */
    }

    return 0;
}
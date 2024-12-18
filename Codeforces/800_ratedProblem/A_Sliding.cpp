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
    ll totalRow, totalCol, personRow, personCol;
    cin >> totalRow >> totalCol >> personRow >> personCol;

    ll totalPerson = totalRow * totalCol;
    ll perPosition = (personRow - 1) * totalCol + personCol;

    ll rowLeft = (totalRow- personRow);
    ll person_left = totalPerson - perPosition;

    person_left -= rowLeft;

    ll ans = rowLeft * (1 + (abs(1 - totalCol)));

    cout << ans+person_left << endl;
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
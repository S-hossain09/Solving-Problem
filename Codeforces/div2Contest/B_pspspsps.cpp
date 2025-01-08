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
    string str;
    cin >> str;

    int cnt = count(str.begin(), str.end(), '.');
    int cntp = count(str.begin(), str.end(), 'p');

    if (cnt == n || cntp == n)
        cout << "YES" << endl;
    else
    {
        n--;
        bool chk = false;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 's')
            {
                int res = (n - i + 1);

                if(res == n)
                {
                    chk = false;
                    break;
                }
            }
        }

        if(chk) cout << "YES" << endl;
        else cout << "NO" << endl;
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
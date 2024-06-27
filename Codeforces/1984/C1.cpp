/**
 * Solution by 1egend (polarity.sh)
 * Date: 2024-06-09
 * Contest: 1984 - Codeforces Global Round 26
 * Problem: C2
 **/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ull unsigned long long
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr.pb(a);
    }

    ll mx = 0;
    ll mn = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        mx = max(abs(mx + arr[i]), abs(mn + arr[i]));
        mn = mn + arr[i];
    }

    cout << mx << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; ++t)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
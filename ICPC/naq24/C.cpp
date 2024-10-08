/**
 * Solution by 1egend (polarity.sh)
 * Date: 2024-10-05
 * Contest: ICPC NAQ 2024
 * Problem: C
**/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ull unsigned long long
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++){
        int d; cin >> d;
        if (d % 2 == 1){
            ans++;
        }
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
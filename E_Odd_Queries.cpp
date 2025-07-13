#include <bits/stdc++.h>
using namespace std;
#define N '\n'

int t, n, q, a[200001], r, l, k, sum=0, dif=0;

void solve() {
    cin >> n >> q;

    //sumamos todo el array
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    // vemos la diferencia de rangos
    while (q--){
        cin >> r >> l >> q;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t; 
    while (t--) solve();
}

// by Sidney Angelly Sahonero Garrado

#include <bits/stdc++.h>
using namespace std;
#define N '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> integers(n);

    // Leer los n números una sola vez
    for (int &x : integers) cin >> x;

    // Ordenar y eliminar duplicados
    sort(integers.begin(), integers.end());
    integers.erase(unique(integers.begin(), integers.end()), integers.end());

    cout << integers.size() << N;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}

// by Sidney Angelly Sahonero Garrado

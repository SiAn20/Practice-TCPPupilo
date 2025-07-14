#include <bits/stdc++.h>
using namespace std;
#define N '\n'

int t, n, q, a[200001], r, l, k, sum = 0, suma_acumulada[200001], result;

void solve() {
  cin >> n >> q;

  // sumamos todo el array
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sum += a[i];
    suma_acumulada[i] = suma_acumulada[i - 1] + a[i];
  }
  // vemos la diferencia de rangos
  while (q--) {
    cin >> r >> l >> k;
    result = suma_acumulada[r - 1] + ((l - r + 1) * k) +
             (suma_acumulada[n] - suma_acumulada[l]);
    if (result % 2 != 0) {
      cout << "YES" << N;
    } else {
      cout << "NO" << N;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> t;
  while (t--)
    solve();
}

// by Sidney Angelly Sahonero Garrado

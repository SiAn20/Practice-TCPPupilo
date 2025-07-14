#include <bits/stdc++.h>
using namespace std;
#define N '\n'

void solve() {
  int n, m;
  while (cin >> n >> m,
         n || m) { // se detiene si s ingresa 2 ceros o se generan mas prueba
    unordered_set<int> cds;
    int total = 0, x;

    // CDs de Jack
    while (n--) {
      cin >> x;
      cds.insert(x);
    }

    // CDs de Jill
    while (m--) {
      cin >> x;
      if (cds.count(x)) {
        total++;
      }
    }

    cout << total << N;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
  return 0;
}

// by Sidney Angelly Sahonero Garrado

// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int l, q, c, x;
  cin >> l >> q;
  // creamos nuestra tabla a cortar
  set<int> cuts;
  cuts.insert(0);
  cuts.insert(l);

  while (q--) {
    cin >> c >> x;

    if (c == 1) {
      cuts.insert(x);

    } else {
      auto it = cuts.lower_bound(x); // busca el >= x y da su pos miau
      int right = *it;
      int left = *prev(it);

      cout << right - left << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/
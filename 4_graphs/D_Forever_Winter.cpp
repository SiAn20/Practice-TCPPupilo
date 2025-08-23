// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, m, u, v, ans1 = 0, ans2 = 0;
  cin >> n >> m;
  vector<int> grado(n + 1);
  for (int i = 0; i < m; ++i) {
    cin >> u >> v;
    grado[u]++;
    grado[v]++;
  }

  // contamos frecuencia de cada grado
  map<int, int> freq;
  for (int i = 1; i <= n; ++i)
    freq[grado[i]]++;

  // almacenamos las frecuencias
  vector<int> vec;
  for (auto p : freq) {
    vec.push_back(p.second);
  }
  sort(vec.begin(), vec.end());
  if (vec.size() == 3) {
    cout << vec[1] << ' ' << vec[2] / vec[1] << endl;
  } else {
    cout << vec[0] - 1 << ' ' << vec[1] / (vec[0] - 1) << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/
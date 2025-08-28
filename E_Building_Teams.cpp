// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

vector<vector<int>> gr;

void solve() {
  int n, m;
  cin >> n >> m;
  gr.resize(n);
  //creamos el grafo
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    gr[a].push_back(b);
    gr[b].push_back(a);
  }

  //
  

}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/
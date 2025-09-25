/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<vector<int>> gr;
vector<int> c;

bool bfs(int n) {
  queue<int> q;
  q.push(n);
  c[n] = 1;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v : gr[u]) {
      if (c[v] == -1) {
        c[v] = 3 - c[u];
        q.push(v);
      } else if (c[v] == c[u])
        return false;
    }
  }
  return true;
}

void solve() {
  int n, m;
  cin >> n >> m;
  gr.resize(n);
  c.assign(n, -1);
  // creamos el grafo
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    gr[a].push_back(b);
    gr[b].push_back(a);
  }

  // resolvemos
  for (int i = 0; i < n; ++i) {
    if (c[i] == -1) {
      if (!bfs(i)) {
        cout << "IMPOSSIBLE" << endl;
        return;
      }
    }
  }

  for (int x : c)
    cout << x << " ";
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
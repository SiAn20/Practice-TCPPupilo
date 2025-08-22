// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<int> c;
vector<bool> visited;
vector<vector<int>> gr;

int dfs(int n) {
  visited[n] = true;
  int min_cost = c[n];
  for (int x : gr[n]) {
    if (!visited[x])
      min_cost = min(min_cost, dfs(x));
  }
  return min_cost;
}

void solve() {
  int n, m, ans = 0;
  cin >> n >> m;
  c.resize(n + 1);
  gr.resize(n + 1, {});
  visited.assign(n + 1, false);

  for (int i = 1; i <= n; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    gr[a].push_back(b);
    gr[b].push_back(a);
  }

  // recorro los elementos buscando menor
  for (int i = 1; i <= n; i++) {
    if (!visited[i])
      ans += dfs(i);
  }
  cout << ans << endl;
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
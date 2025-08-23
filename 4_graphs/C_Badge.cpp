// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

int n, ans, gr[1001];
bool visited[1001];

void bfs(int nodo) {
  ans = nodo;
  if (visited[nodo])
    return;
  visited[nodo] = 1;
  bfs(gr[nodo]);
}

void solve() {
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> gr[i];
  }

  for (int i = 1; i <= n; ++i) {
    memset(visited, 0, sizeof visited);
    bfs(i);
    cout << ans << " ";
  }
  cout << endl;
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
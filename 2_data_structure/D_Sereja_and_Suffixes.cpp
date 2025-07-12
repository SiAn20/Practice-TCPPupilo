#include <bits/stdc++.h>
using namespace std;
#define N '\n'

int n, m, l, cant_distint[100001], a[100001];
bool usado[100001];

void solve() {
    cin >> n >> m;
    
    //llenar el array de n numeros
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }

    //llenar cantidad de distintos de cada pos li a n
    for (int i=n; i>0; i--){
        if (usado[a[i]]){
            cant_distint[i] = cant_distint[i+1];
        } else{
            usado[a[i]] = true;
            cant_distint[i] = cant_distint[i+1] + 1;
        }
    }

    //imprimir cant de distintos en li
    while (m--){
        cin >> l;
        cout << cant_distint[l] << N;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}

// by Sidney Angelly Sahonero Garrado

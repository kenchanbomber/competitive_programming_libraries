#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, j, n) for (int i = j; i < (int)(n); i++)
const int MAX_N = 1000;
ll C[MAX_N][MAX_N];

void init_pascal() {
    C[0][0] = 1;
    rep(i,0,MAX_N)rep(j,0,i+1) {
        C[i+1][j] += C[i][j];
        C[i+1][j+1] += C[i][j];
    }
}

int main() {
    init_pascal();
    cout << C[3][2] << "\n"; // 3
    cout << C[4][2] << "\n"; // 6
    return 0;
}
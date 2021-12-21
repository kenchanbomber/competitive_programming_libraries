#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1000;
long long C[MAX_N][MAX_N];

void init_pascal() {
    C[0][0] = 1;
    for(int i = 0; i < MAX_N; i++) for(int j = 0; j < i + 1; j++) {
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
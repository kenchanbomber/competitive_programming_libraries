#include <bits/stdc++.h>
using namespace std;

// cumulative sum
template<typename T>
vector<long long> cumsum(vector<T> v) {
    int n = v.size();
    vector<long long> res(n+1);
    for(int i = 1; i < n + 1; i++) res[i] = v[i-1] + res[i-1];
    return res;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<long long> res1 = cumsum(a);
    for(int i = 0; i < res1.size(); i++) printf("%lld ", res1[i]); printf("\n"); // { 0, 1, 3, 6, 10, 15 }
    return 0;
}
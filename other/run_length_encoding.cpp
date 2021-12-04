#include <bits/stdc++.h>
using namespace std;
#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

vector<pair<char,int>> runLengthEncoding(string s) {
    vector<pair<char,int>> res;
    char pre = s[0];
    int n = s.size(), cnt = 1;
    rep(i,1,n) {
        if(pre == s[i]) { cnt++; } else { res.emplace_back(pre,cnt); cnt = 1, pre = s[i]; }
    }
    res.emplace_back(pre,cnt);
    return res;
}

int main() {
    string s = "aaabbbccc";
    vector<pair<char,int>> res = runLengthEncoding(s);
    for(auto &[c,n] : res) printf("%c: %d\n", c, n);// a: 3, b: 3, c: 3
    return 0;
}
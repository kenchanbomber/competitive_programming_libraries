#include <bits/stdc++.h>
using namespace std;

struct union_find {
    vector<int> d;
    union_find(int n=0): d(n+1,-1) {}
    int find(int x) {
        if(d[x] < 0) return x;
        return d[x] = find(d[x]);
    }
    bool unite(int x, int y) {
        x = find(x); y = find(y);
        if(x == y) return false;
        if(-d[x] < -d[y]) swap(x,y);
        d[x] += d[y]; d[y] = x;
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -d[find(x)]; }
    bool is_root(int x) { return find(x) == x; }
};

int main() {
    //let's make 2 groups {1,2,3} {5,6}
    union_find uf = union_find(10);

    //"unite"
    uf.unite(1,2);
    uf.unite(2,3);

    uf.unite(5,6);

    //"size" returns the number of the group
    printf("%d\n", uf.size(1)); // 3

    //"same" returns (menber A and B belongs to the same group)
    cout << (uf.same(1,2) ? "true" : "false") << endl; // true
    cout << (uf.same(3,5) ? "true" : "false") << endl; // false

    //"size" returns (the size of the group)
    cout << uf.size(1) << endl; // 3
    cout << uf.size(5) << endl; // 2

    // is_root
    cout << (uf.is_root(1) ? "true" : "false") << endl; // true
    cout << (uf.is_root(3) ? "true" : "false") << endl; // false
    return 0;
}
#include<bits/stdc++.h>
#include <cstdio>

using namespace std;
using ll = long long;
#define endl '\n'
#define fio  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define forn(i, ii, n) for (int (i) = ii; (i) < int(n); (i)++)
#define cinn(n) int n;cin>>n;

int main(){
    fio
    map<int,float> m;
    map<int,float>::reverse_iterator mi;
    int c,k;float v;


    forn(x,0,2){
        cin >> c;
        forn(i,0,c){
            cin >> k;
            cin >> v;
            m[k]+=v;
            // ↓↓↓ [ 挖坑点/Notice! ] ↓↓↓
            if (m[k]==0)m.erase(k);
        }
    }

    printf("%zu",m.size());
    for (mi = m.rbegin();mi != m.rend();mi++){
        printf(" %d ",mi->first);
        printf("%.1f",mi->second);
    }
    return 0;
}
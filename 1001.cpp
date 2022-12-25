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
    cinn(a)
    cinn(b)
    int c = a+b;

    if (c<0)cout << "-";

    string cc = to_string(abs(c));

    if (cc.length()<4){
        cout << cc;
    } else {
        string res;
        int cnt=0;
        for (int i=cc.size()-1;i>=0;i--){
            if(cnt == 3){
                cnt =0;
                res = ","+ res;
            }
            res = cc[i] + res;
            cnt ++;
        }
        cout << res;
    }

}
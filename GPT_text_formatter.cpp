#include <bits/stdc++.h>
using namespace std;

void solve(){
    string line;
    while (getline(cin,line)) {
        for (auto it: line){
            if (it == '*' or it == '#') continue;
            cout << it;
        }
        cout << endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    #endif
    solve();
    return 0;
}
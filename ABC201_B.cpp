#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<pair<ll, string>> v(n);
    for(int i = 0; i < n; i++){
        string s;
        ll t;
        cin >> s>> t;
        v.at(i) = make_pair(t, s);
    }

    sort(v.begin(), v.end());

    cout << v.at(n-2).second << endl;

}
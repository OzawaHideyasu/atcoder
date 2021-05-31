#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> A(n) ,B(n);
    vector<pair<ll, ll>> P(n);

    for(int i = 0; i < n; i++){
        ll a,b;
        cin >> a >> b;
        P.at(i) = make_pair(a, b);
    }

    sort(P.begin(), P.end());

    ll ans = k;

    if(k >=  P.at(0).first) {
        
        k= k - P.at(0).first+ P.at(0).second;
        ans = P.at(0).first;

        for(int i=0; i<n-1;i++) {
            ll dist = P.at(i+1).first - P.at(i).first;
            if(k >=  dist) {
                k = k - dist + P.at(i+1).second;
                ans = P.at(i+1).first;
            }else {
                break;
            }
        }
        ans += k;
    }
    cout << ans << endl;

}
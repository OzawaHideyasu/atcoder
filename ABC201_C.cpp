#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string S;
    cin >> S;

    string ans = "No";
    int S_maru=0;
    int S_batu=0;
    int S_nazo=0;

    ll cnt =0;
    for(auto s: S){
        if(s == 'o') {
            S_maru++;
        } else if(s == 'x') {
            S_batu++;
        } else {
            S_nazo++;
        }
    }

    if(S_maru > 4) {
        cnt =0;
    } else if(S_maru == 4) {
        cnt = 24;
    } else if(S_maru == 3) {
        cnt = 24*S_nazo;
        cnt += 36;
    } else if(S_maru == 2) {
        cnt = 12*pow(S_nazo,2);
        cnt += 24*S_nazo;
        cnt += 6;
        cnt += 8;
    } else if(S_maru == 1) {
        cnt = 4*pow(S_nazo,3);
        cnt += 6*pow(S_nazo,2);
        cnt += 4*S_nazo;
        cnt++;
    } else if(S_maru == 0) {
        cnt = pow(S_nazo,4);
    }

    cout << cnt << endl;

}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<int> A(3);
    

    string ans = "No";
    for(int i = 0; i < 3; i++){
        cin >> A.at(i);
    }
    sort(A.begin(), A.end());
    int diff1 = A.at(1)-A.at(0);
    int diff2 = A.at(2)-A.at(1);

    if(diff1 == diff2) ans = "Yes";

    cout << ans << endl;

}
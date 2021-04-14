#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n;
    cin >> n;
    vector<ll> A(n);

    for(int i = 0; i < n; i++){
        cin >> A.at(i);
    }

    for(int i = 0; i < n-1; i++){
       if(A.at(i+1) == A.at(i)) {
           cout << "stay" << endl;
       } else if(A.at(i+1) < A.at(i)){
            cout << "down " << A.at(i)- A.at(i+1)<<endl;
       } else{
           cout << "up " << A.at(i+1)- A.at(i)<<endl;
       }
    }


}
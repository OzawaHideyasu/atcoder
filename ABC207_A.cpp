#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   vector<int> A(3);
   cin >> A.at(0) >> A.at(1)>> A.at(2);
   sort(A.begin(), A.end());
   int ans = A.at(1)+ A.at(2);


   cout << ans << endl;

}
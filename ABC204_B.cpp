#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   vector<int> A(n);

   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }
   ll cnt = 0;

   for(int i = 0; i < n; i++){
      int get_mi = A.at(i)-10;
      if(get_mi > 0){
          cnt += get_mi;
      }
   }

   cout << cnt << endl;

}
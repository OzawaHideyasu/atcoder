#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   int a ,b;
   cin >> a >> b;

   string ans = "No";
   for(int i = 0; i < n; i++){
      
   }

   cout << ans << endl;

}

#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   vector<ll> A(pow(2,n));

   int ans = 0;
   for(int i = 0; i < pow(2,n); i++){
      cin >> A.at(i);
   }

   for(int i = n; i > 0; i--){
      for(ll j = 0; j < pow(2,n) - 1; j += 2) {
         cout << j << endl;
         if(A.at(j) > A.at(j+1)) {
            cout << A.at(j) << endl;
            A.erase(A.begin() + j);
          }
          else{
             
            cout << A.at(j+1) << endl;
            A.erase(A.begin() + j+1);
         }
      }
      // num /=2;
      // for(int k = 0; k < pow(2,num); k++){
      //   cout << A.at(k) << endl;
      // }
   }
   // for(int j = 0; j < num - 1; j += 2) {
   //    if(A.at(j) < A.at(j+1)) {
   //       A.erase(A.begin() + j);
   //    }else{
   //       A.erase(A.begin() + j+1);
   //    }

   //    num /=2;
   //    for(int i = 0; i < pow(2,num); i++){
   //      cout << A.at(i) << endl;
   //    }

   // }



   // for(int i = 0; i < num; i++){
   //    cout << A.at(i) << endl;
   // }
   // cout << A.at(num-1) << endl;
}
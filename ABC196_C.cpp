 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll n) {
   int digit = = to_string(n).length();
}

int main(){
   ll n;
   cin >> n;
   int digit = = to_string(n).length();

   ll ans = 0;



   if(digit < 2) {
       ans += 0;
   } else if(digit < 4) {
       ans += n -1000 +1;
   } else if(digit <= 9) {
       comma += 1*(pow(10,6)-pow(10,3));
       comma += 2*(n-1000000 +1) ;
   } else if(digit <= 12) {
       comma += 1*(pow(10,6)-pow(10,3))+2*(pow(10,9)-pow(10,6));
       comma += 3*(n-1000000000 + 1);
   } else if(digit <= 15) {
       comma += 1*(pow(10,6)-pow(10,3))+2*(pow(10,9)-pow(10,6))+3*(pow(10,12)-pow(10,9));
       comma += 4*(n-1000000000000 +1);
   } else if(digit == 16) {
       comma += 1*(pow(10,6)-pow(10,3))+2*(pow(10,9)-pow(10,6))+3*(pow(10,12)-pow(10,9))+4*(pow(10,15)-pow(10,12));
       comma += 5;
   }

   cout << ans << endl;

}
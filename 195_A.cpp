#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int m ,h;
   cin >> m >> h;

   string ans = "No";
   if(h%m ==0) {
       ans = "Yes";
   }

   cout << ans << endl;
}
 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n,q;
   cin >> n;
   string s;
   cin >> s;
   cin >>q;

   for(int i = 0; i < q; i++){
      int t;
      cin >> t;
      ll a, b;
      cin >> a >> b;

      if(t == 1){
         char A =s[a-1];
         char B =s[b-1];
         string AA = string() + A;
         string BB = string() + B;
         s.replace(a-1,1,BB);
         s.replace(b-1,1,AA);
      }

      if(t == 2){
         string s1 = s.substr(0,n);
         string s2 = s.substr(n,n);
         s = s2 + s1;
      }
   
   }
   cout << s << endl;

}
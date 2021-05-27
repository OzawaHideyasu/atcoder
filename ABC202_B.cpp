#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   string S;
   cin >> S;

   string ans ="";
   stack<char> st;

   for(auto s:S){
      if(s == '6') {
          st.push('9');
          continue;
      }
      
      if(s == '9') {
          st.push('6');
          continue;
      }
      st.push(s);
   }

   while(!st.empty()) {
       cout << st.top();
       st.pop();

   }


}
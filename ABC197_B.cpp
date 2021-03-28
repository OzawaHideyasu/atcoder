 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int h, w, x, y;
   cin >> h >> w >> x  >> y;
   vector<string> S(h);
   
   for(int i = 0; i < h; i++){
      cin >> S.at(i);
   }

   x--;
   y--;
   ll cnt =1;

    
    for(int i = y-1; i >= 0; i--){
        if(y>0){
          if(S.at(x).at(i) == '#'){
            break;
            }
        cnt++;
        }
    }
   
    for(int i = y+1; i < w; i++){
        if(y<w){
            if(S.at(x).at(i) == '#'){
                break;
             }
        cnt++;
        }
    }

    for(int i = x-1; i >= 0; i--){
        if(x>0){

         if(S.at(i).at(y) == '#'){
            break;
          }
          cnt++;
        }
    }


   for(int i = x+1; i < h; i++){
        if(i<h){
        if(S.at(i).at(y) == '#'){
          break;
        }
        cnt++;
        }
   }
   cout << cnt << endl;

}
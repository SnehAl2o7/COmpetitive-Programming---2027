#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin >> t;
  while(t--){
    long long  a,b,n;
    cin >> a >> b >> n;
    vector<long long>v(n);
 
    for(int i=0;i<n;i++){
      cin >> v[i];
    }
 
    long long total = b;
 
    for(int i=0;i<n;i++){
      if(v[i] < a-1){
        total += v[i];
      }
      else{
        total += a-1;
      }
    }
 
    cout << total << endl;
  }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>> n>>r>>b;
        string s;
        int sec = r/(b+1);
        int rem = r % (b+1);
        for(int i =0;i <=b;i++){
            s +=  string(sec, 'R');
            if(rem >0){
                s += "R";
                rem--;
            }
            if(i < b) s += "B";
        }
        cout << s << endl;
    }
}
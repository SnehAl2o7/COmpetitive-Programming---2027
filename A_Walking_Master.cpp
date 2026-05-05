#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >>c >>d;
        
        if(b > d){
            cout << -1 << endl;
            continue;
        }

        
        int move = d - b;

        a += move;

        if(a < c){
            cout << -1 << endl;
            continue;
        }

        move += (a-c);

        cout << move << endl;




    }
}
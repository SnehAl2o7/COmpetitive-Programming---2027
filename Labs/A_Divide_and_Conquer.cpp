#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int x,y;

        cin>>x>>y;

        if(x == y || y == 1){
            cout <<"YES\n";
            continue;
        }

        if(x < y){
            cout << "NO\n";
            continue;
        }

        

        bool ch = 0;

        for(int i = 2;i<x;i++){
            if(x%i==0){
                if(i == y){
                    ch=1;
                    break;
                }
            }
        }

        if(ch)cout<<"YES\n";
        else cout << "NO\n";
    }
}
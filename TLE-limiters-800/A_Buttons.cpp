#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >>c;
        bool one = 0;
        int rem = c%2;

        if(!rem){
            if(a > b){
                one=1;
            }else{
                one=0;
            }
        }else{
            if(b >a){
                one=0;
            }else{
                one=1;
            }
        }

        if(one)cout << "First" <<endl;
        else cout << "Second" << endl;

    }
}
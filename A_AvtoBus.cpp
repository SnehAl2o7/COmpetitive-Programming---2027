#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;

        if(n%2 == 1 || n < 4){
            cout << -1 << endl;
            continue;
        }

        ll x,y;

        // for the minimum value
        if(n%6 == 0){
            x = n/6;
        }
        else{
            if(n%6 == 2){
                x = n/6 -1;
                x += 2;
            }

            if(n%6 == 4){
                x = n/6;
                x += 1;
            }
        }

        // for the maximum value
        if(n%4 == 0){
            y = n/4;
        }
        else{
            y = n/4 -1;
            y += 1;
        }

        cout << x <<" " << y << endl;

    }
}
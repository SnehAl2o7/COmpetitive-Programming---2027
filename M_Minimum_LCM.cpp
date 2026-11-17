#include<bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long

// when i have the gcd, so to make the lcm smallest I just have to make the gcd of a,b largest.
// and will only require me to one number the largest divisor of n.

int main(){
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        
        ll a= 1;
        

        for(int i =2; i*i <=n; i++){
            if(n%i == 0){
                a = n/i;
                break;
            }
        }

        cout << a << " " << n-a << endl;

        
    }
}


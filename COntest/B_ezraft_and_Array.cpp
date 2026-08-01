#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;

        if(n == 2){
            cout << -1 << endl;
            continue;
        }

        vector<ll> v = {1,2,3};

        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        else{
            int size = 3;
            ll curr_sum = 6;

            while(size != n){
                    v.push_back(curr_sum);
                    curr_sum *= 2;
                    size++;
            }

            for(ll i : v){
                cout << i << " ";
            }
            cout << endl;

        }
    }
    
}
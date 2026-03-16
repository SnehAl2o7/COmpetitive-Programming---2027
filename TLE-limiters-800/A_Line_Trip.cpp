#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> arr(n+1,0);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        arr[n] = x;

        int mini_fuel = arr[0];
        for(int i = 0;i < n;i++){
            int diff = arr[i+1] - arr[i];
            // cout << diff << " ";
            
            if(i == n-1){
                diff *= 2;
            }
            
            if(diff > mini_fuel){
                mini_fuel = max(diff,mini_fuel);
            }

        }

        cout << mini_fuel << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        vector<int> v(7);
        for(int i = 0;i < 7;i++){
            cin >> v[i];
        }

        int maxi = -68;
        int sum = 0;

        for(int i : v){
            maxi = max(maxi, i);

            sum += (-i);
        }

        cout << sum + (2 * maxi) << endl;
    }
}
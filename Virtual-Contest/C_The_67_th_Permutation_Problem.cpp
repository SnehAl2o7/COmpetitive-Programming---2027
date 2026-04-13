#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> vec(3*n,0);

        for(int i = 0;i < 3*n;i++){
            vec[i] = i+1;
        }

        for(int i : vec){
            cout << i << " ";
        }

        cout << endl;
    }
}
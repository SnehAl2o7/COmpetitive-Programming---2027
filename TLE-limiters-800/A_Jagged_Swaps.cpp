#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int> arr){
    int val = 1;
    for(int i = 0;i<arr.size()-1;i++){
        if(arr[i] > arr[i+1]){
            val = 0;
            break;
        }
    }

    return val;
}



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i =0;i<n;i++){
            cin >> arr[i] ;
        }

        if(arr[0] == 1){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}


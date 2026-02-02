#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfArrays(vector<int> arr1, vector<int> arr2){
    vector<int> Union;
    int n = arr1.size(), m = arr2.size();
    set<int> s;
    for(int i : arr1){
        s.insert(i);
    }
    for(int j : arr2){
        s.insert(j);
    }
    return vector<int> (s.begin(),s.end());
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        for(int j = 0; j < m; j++){
            cin >> arr2[j];
        }
        vector<int> result = unionOfArrays(arr1, arr2);
        for(int val : result){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
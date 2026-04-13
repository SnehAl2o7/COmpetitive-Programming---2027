#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);

    for(int i = 0;i <n;i++) cin >> v[i];

    int mini = INT_MAX;

    for(int i : v){
        mini = min(mini, abs(i));
    }

    cout << mini << endl;
}
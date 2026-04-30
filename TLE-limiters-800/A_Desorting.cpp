#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long >v(n);
        for(int i =0;i<n;i++) cin >> v[i];

        long long ind=0;
        int mini = 0;
        long long diff=INT_MAX;

        for(int i =0;i<n-1;i++){
            long long val = v[i+1] - v[i];

            if(val < 0){
                mini = 0;
                break;
            }
            
            if(val < diff){
                diff = val;
                ind = i;
                mini = 1;
            }
        }

        if(mini){
            long long cnt=0;
            long long a = v[ind], b =v[ind+1];
            long long sub = b-a;

            cout << (sub/2)+1<<endl;
            
        }
        else {
            cout << mini << endl;
        }

    }

}

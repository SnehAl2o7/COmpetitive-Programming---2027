#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =0;i<n;i++) cin >> v[i];

        int cnt1 = 0,cnt2 = 0,cnt0 = 0;
        for(int i =0;i<n;i++){
            if(v[i] == 1) cnt1++;
            else if(v[i] == 2) cnt2++;
            else cnt0++;
        }

        int val = cnt0;

        if(cnt2 == cnt1){
            val += cnt2;
            cout << val << endl;
        }

        else if(cnt1 > cnt2){
            val += cnt2;

            cnt1 -= cnt2;

            val += (cnt2/3);
            cout << val << endl;
        }

        else{
            val += cnt1;

            cnt2 -= cnt1;

            val += (cnt1/3);
            cout << val << endl;
        }      
    }
}
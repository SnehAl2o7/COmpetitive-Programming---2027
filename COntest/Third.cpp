#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin >>a>>b;

        int cnt = 0;

        if(a == b){
            cout << cnt <<"\n";
            continue;
        }

        int cnta0 = 0, cnta1 = 0, cntb0 = 0, cntb1 = 0;

        for(int i =0;i<n;i++){
            if(a[i] == '0')cnta0++;
            else cnta1++;

            if(b[i] == '0')cntb0++;
            else cntb1++;
        }

        if((cnta0 != cntb0 )|| (cnta1 != cntb1)){
            cout << -1 << "\n";
            continue;
        }

        vector<int> a_even, b_even;
        bool check = 1;

        for(int i =0;i<n;i+=2){
            if(a[i] == '1'){
                a_even.push_back(i);
            }
            
            if(b[i] == '1'){
                b_even.push_back(i);
            }
        }

        vector<int> a_odd, b_odd;

        for(int i =1;i<n;i+=2){
            if(a[i] == '1'){
                a_odd.push_back(i);
            }
            
            if(b[i] == '1'){
                b_odd.push_back(i);
            }
        }

        if(a_even.size() != b_even.size() || a_odd.size() != b_odd.size()) {
            check = 0;
        }

        if(check){
            long long moves = 0;

            for(int i= 0;i<a_even.size();i++){
                moves += abs(a_even[i] - b_even[i])/2;
            }

            for(int i= 0;i<a_odd.size();i++){
                moves += abs(a_odd[i] - b_odd[i])/2;
            }

            cout << moves << endl;
            
        }
        else cout << -1 << "\n";

    }
}
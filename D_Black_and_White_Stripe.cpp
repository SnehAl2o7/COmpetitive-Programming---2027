#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        // Sliding window

        int curr_w=0;

        for(int i=0;i<k;i++){
            if(s[i] == 'W')curr_w++;
        }

        if(curr_w ==0 ){
            cout << 0 << endl;
            continue;
        }


        int cost = curr_w;

        for(int i =k;i <n;i++){
            if(s[i] == 'W'){
                curr_w++;
                if(s[i-k] == 'W'){
                    curr_w--;
                }
            }else{
                if(s[i-k] == 'W'){
                    curr_w--;
                }
            }

            cost = min(cost, curr_w);
        }

        cout << cost << endl;
        
        
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int kx,ky;
        cin >> kx >> ky;
        int qx,qy;
        cin >> qx >> qy;

        vector<int> mov = {a,b,-a,-b, a,-b,b,-a};

        set<pair<int,int>> vec_k;
        set<pair<int,int>> vec_q;

        for(int i =0;i < 8;i+=2){
            int j = i+1;
            // for possible move of king
            vec_k.emplace(kx+mov[i],ky+mov[j]);
            vec_k.emplace(kx+mov[j],ky+mov[i]);
            // for possible move of queen 
            vec_q.emplace(qx+mov[i],qy+mov[j]);
            vec_q.emplace(qx+mov[j],qy+mov[i]);
        }
        // for all the king moves
        // for(auto it : vec_k){
        //     cout << it.first << "->" << it.second;
        //     cout << endl;
        // }
        // // for all the queen moves 
        // for(auto it : vec_q){
        //     cout << it.first << "->" << it.second;
        //     cout << endl;
        // }

        // for getting the same index.
        int cnt = 0;
        for(auto it : vec_k){
            for(auto ot : vec_q){
                if(it.first == ot.first && it.second == ot.second){
                    cnt++;
                }
            }
        }

        cout << cnt << endl;

    }
}
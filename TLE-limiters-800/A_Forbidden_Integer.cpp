#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int x,k,n;
        cin >> n >> k >> x;

        if(x == k && k == 1){
            cout << "NO" << endl;
        }
        
        else if(k == 2 && x == 1 && n%2== 1){
            cout << "NO" << endl;
        }
        else{

            cout << "YES" << endl;

            vector<int> ans;

            if(x == k) k--;

            if(k == n){
                ans.push_back(n);
            }
            else{
                int rest = n%k;
                int val = n/k;

                while(val--){
                    ans.push_back(k);
                }

                if(rest != 0){
                    if(x != 1){
                    while(rest--){
                        ans.push_back(1);
                    }
                    }
                    else{
                    if(rest == 1){
                        ans[n/k -1] = k-1;
                        ans.push_back(2);
                    }
                    else{
                        ans.push_back(rest);
                    }
                }
                }
            }

            cout << ans.size() << endl;
            for(int i : ans) cout << i << " ";
            cout << endl;


        }



        

        
    }
}
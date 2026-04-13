#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long n,q;
        cin >> n >> q;

        vector<long long> v(n);
        for(int i = 0;i < n;i++) cin >> v[i];

        vector<vector<long long>> vec(q,vector<long long> (3));

        for(int i = 0;i < q;i++){
            for(int j = 0;j < 3;j++){
                cin >> vec[i][j];
            }
        }

        int m = 0;

        unordered_map<int,int> Prefix;
        
        long long sum = 0;

        for(int i  = 0;i<n;i++){
            sum += v[i];
            Prefix[i] = sum;
        }

        while(q--){
            
            long long l = vec[m][0] - 1, r = vec[m][1] -1, k = vec[m][2];
            
            long long c_sum = 0;

            if(l != 0){
                c_sum = Prefix[r] - Prefix[l-1];
            }
            else{
                c_sum = Prefix[r];
            }

            long long s_sum = k * (r-l+1);

            if(sum % 2 == 0){
                if(abs(s_sum - c_sum) % 2  == 1){
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }else{
                if(abs(s_sum - c_sum) % 2  == 0){
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }

            m++;
        }
    }
}


/*

## The TLE code ## 

long long sum = accumulate(v.begin(),v.end(),0LL);

        // long long m = 0;
        
        
}

        */
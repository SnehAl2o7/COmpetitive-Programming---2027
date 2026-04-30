#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        long long p;
        cin >> n >>p;

        vector<pair<long long, long long>> v(n);

        for(int i = 0;i<n;i++){
            cin >> v[i].first;
        }

        for(int i =0;i<n;i++){
            cin >> v[i].second;
        }

        sort(v.begin(), v.end(), [](pair<long long , long long>&a,pair<long long , long long>&b){
            return a.second < b.second;
        });

        long long sum = p;

        int i = 0;
        int len = n-1;
        while(i < n && len >=0){

            // checking the cost less than p or not
            if(v[i].second < p){

                int limit = len - v[i].first;
                if(limit >=0){
                    sum += (v[i].second * v[i].first);
                    len -= v[i].first;
                }
                else{
                    sum += (v[i].second*len);
                    len =0;
                }
            }
            
            else{
                sum += (p*len);
                len = 0;
            }

            i++;
        }

        cout << sum << endl;


    }
}
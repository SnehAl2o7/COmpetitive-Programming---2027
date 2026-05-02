#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long  n;
        cin >> n;

        vector<long long> v(n);
        for(long long i = 0;i<n;i++){
            cin >> v[i];
        }

        vector<long long> divi, two, three, no_div;

        for(long long i =0;i<n;i++){
            if(v[i]%6 == 0){
                divi.push_back(v[i]);
            }
            else if(v[i]%2 == 0){
                two.push_back(v[i]);
            }
            else if(v[i]%3 == 0){
                three.push_back(v[i]);
            }
            else{
                no_div.push_back(v[i]);
            }
        }

        long long j = 0;
        
        for(long long i = 0;i<divi.size();i++){
            v[j] = divi[i];
            j++;
        }

        for(long long i = 0;i<two.size();i++){
            v[j] = two[i];
            j++;
        }

        
        for(long long i = 0;i<no_div.size();i++){
            v[j] = no_div[i];
            j++;
        }

        for(long long i = 0;i<three.size();i++){
            v[j] = three[i];
            j++;
        }

        for(long long i : v){
            cout << i << " ";
        }
        cout << "\n";      

    }
}
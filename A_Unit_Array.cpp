#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =0;i<n;i++)cin >> v[i];

        int pos = 0,neg=0;
        for(int i:v){
            if(i >0)pos++;
            else neg++;
        }

        if(pos >= neg && neg%2 == 0){
            cout << 0 << endl;
        }
        else if(pos >= neg && neg&2 == 1){
            cout << 1 << endl;
        }
        else{
            
            int cnt = 0;
            while(pos < neg){
                pos++;
                neg--;
                cnt++;
            }

            if(neg%2 == 0){
                cout << cnt << endl; 
            }else{
                cout << cnt+1 << endl;
            }
            
            
        }


    }
}
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin >>x;

        if(x == 1){
            cout << 1 <<endl;
            continue;
        }
 
        int limit = int(sqrt(x));
        int cnt = 2;
        for(int i=2;i <= limit;i++){
            if(x%i == 0){
                int a = x/i, b=i;
                if(a != b){
                    cnt+=2;
                }else{
                    cnt += 1;
                }
            }
        }
        cout << cnt << endl;
    }
}
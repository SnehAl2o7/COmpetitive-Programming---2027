#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int a,b,c;
        cin >>a>>b>>c;

        int cnt = 0;

        while(a != b && b != c && c != a){
            int maxi = max(a,max(b,c));
            int mini = min(a,min(b,c));

            if(a == maxi) a--;
            else if(b == maxi) b--;
            else c--;

            if(a == mini) a++;
            else if(b == mini) b++;
            else c++;

            cnt++;
        }

        cout << cnt << endl;
    }
}
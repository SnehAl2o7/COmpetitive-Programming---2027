#include<bits/stdc++.h>
using namespace std;

bool inString(string s,string x){
        int m = s.size();
        int n = x.size();
        int len = m-1;

        bool flag = 0;
        for(int i=0; len < n;i++){
            string ch = x.substr(i,m);
            // cout << ch << endl;
            if(ch == s){
                flag = 1;
                break;
            }
            len++;
        }

        return flag;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        
        bool flag = 0;

        string x0 = x;
        string x1 = x0+x0;
        string x2 = x1+x1;
        string x3 = x2+x2;
        string x4 = x3+x3;
        string x5 = x4+x4;

        int cnt = -1;

        if(inString(s,x0)){
            cnt = 0;
        }else if(inString(s,x1)){
            cnt = 1;
        }else if(inString(s,x2)){
            cnt=2;
        }else if(inString(s,x3)){
            cnt=3;
        }else if(inString(s,x4)){
            cnt=4;
        }else if(inString(s,x5)){
            cnt=5;
        }

        cout << cnt << endl;
    }

    return 0;
}

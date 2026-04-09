#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int check = 0, a,b;

    for(int i = 0;i< n-1;i++){
        if(s[i] > s[i+1]){
            check = 1;
            a = i+1;
            b = i+2;
            break;
        }
    }

    if(check){
        cout << "YES" << endl;
        cout << a << " " << b << endl;
    }else{
        cout << "NO" << endl;
    }
}
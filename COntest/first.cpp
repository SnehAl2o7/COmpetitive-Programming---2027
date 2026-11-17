#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        // alice chance.
        int one=-1, two=-1;
        for(int i =0;i<s.size();i++){
            if(s[i] == '0' && one == -1){
                one = i;
            }
            else if(s[i] == '1' && two == -1){
                two = i;
            }

            if(one != -1 && two != -1){
                break;
            }
        }

        for(int i =0;i<s.size();i++){
            if(i != one && i != two){
                cout << s[i];
            }
        }

        cout << endl;
    }
}
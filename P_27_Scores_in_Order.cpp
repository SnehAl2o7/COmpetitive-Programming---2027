#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int>v(n);

    for(int i =0;i<n;i++)cin >>v[i];

    vector<int> ind(n,0);

    for(int i =0;i<n;i++){
        int val = v[i];
        
        if(ind[0] == 0){
            ind[0] = val;
            cout << i+1 << endl;
            continue; 
        }

        int place = -1;

        for(int i =0;i<n;i++){
            if(val > ind[i]){
                place = i;
                break;
            }
        }

        cout << place+1 << endl;

        if(ind[place] == 0){
            ind[place] = val;
            continue;
        }
        else{
            for(int i=n-2;i>=place;i--){
                ind[i+1] = ind[i];
            }

            ind[place] = val;
        }
    }

    for(int i : ind){
        cout << i <<" ";
    }
    cout << "\n";


}
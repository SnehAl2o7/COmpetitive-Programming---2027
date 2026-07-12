#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<"\n";
}

int main(){
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
        print(v);
    }

}
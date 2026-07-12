#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<"\n";
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=0;i<n-1;i++){
        int min_ind = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_ind]){
                min_ind = j;
            }
        }
        swap(v[i],v[min_ind]);
        print(v);
    }

}
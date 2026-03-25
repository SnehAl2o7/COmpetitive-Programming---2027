#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> vec(n,{0,0});

    // cout << "The first is the burst time and the second is the priority time." << endl;

    for(int i = 0;i< n;i++){
        int a, b;
        cin >> a >> b;
        vec[i].first = a;
        vec[i].second = b;
    }

    sort(vec.begin(), vec.end(), [](const pair<int, int>& left, const pair<int, int>& right) {
    return left.second < right.second;          
    });

    double total = 0;
    int current = 0;
    for(int i = 0;i < n-1;i++){
       total += current;
       current += vec[i].first; 
    }

    cout << fixed << setprecision(2) << (total / n) << endl;
}

 
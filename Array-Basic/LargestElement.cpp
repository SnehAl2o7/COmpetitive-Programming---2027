#include<bits/stdc++.h>
using namespace std;

// finding the largese element

int findLargest(vector<int> arr){
    int max = arr[0];
    for(int i: arr){
        if(i > max){
            max = i;
        }
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cout << findLargest(arr) << endl;
}

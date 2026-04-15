#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<long long>a(n);
        for(int i =0;i<n;i++) cin >> a[i];

        long long mx = *max_element(a.begin(), a.end());
        vector<long long> b, c; // Arrays b and c
        for (int i = 0; i < n; i++) // Distribute elements into b and c
        {
            if (a[i] != mx)
                b.push_back(a[i]); // Add to b if not the maximum
            else
                c.push_back(a[i]); // Add to c if it is the maximum
        }

        // Check if array b is empty, meaning all elements were the same
        if (b.size() == 0) // All elements are the same and hence max
        {
            cout << -1 << endl; // No valid distribution possible
        }
        else
        {
            // Output the sizes of arrays b and c
            cout << b.size() << " " << c.size() << endl;
            // Output elements of array b
            for (auto it : b)
                cout << it << " ";
            cout << endl;
            // Output elements of array c
            for (auto it : c)
                cout << it << " ";
            cout << endl;
        }


    }
}
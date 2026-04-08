#include<bits/stdc++.h>
using namespace std;


int check(int &i, int &j){

    int total = 0;
    if(i == 0 || j == 0 || i == 9 || j==9){
                    total++;
                }
                else if(i == 1 || j==1 || i == 8 || j == 8){
                    total += 2;
                }
                else if(i == 2 || j == 2 || i == 7 || j==7){
                    total += 3;
                }
                else if(i == 3 || j ==3 || i == 6 || j == 6){
                    total += 4;
                }else {
                    total += 5;
                }

    return total;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<char>>a(10,vector<char>(10));

        for(int i =0 ;i < 10;i++){
            for(int j = 0;j <10;j++){
                cin >> a[i][j];
            }
        }


        int total = 0;
        for(int i=0;i<10;i++){
            for(int j =0;j<10;j++){
                if(a[i][j] == 'X'){
                    total += check(i,j);
                }
            }
        }

        cout << total << endl;

    }
}

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int data[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> data[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=n-1; j>=0; j--){
            if(j>0)cout <<  data[j][i] << " ";
            else cout << data[j][i];
        }
        cout << endl;
    }

    return 0;
}

#include<bits/stdc++.h>

using namespace std;
int N,M,P;

int main(){

    int arr[100][100], arr1[100][100];

    cin >> N >> M >> P;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<M; i++){
        for(int j=0; j<P; j++){
            cin >> arr1[i][j];
        }
    }
    int  ans[100][100], temp = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            ans[i][j] = 0;
            for(int k=0; k<M; k++){
                temp = arr[i][k] * arr1[k][j];
                ans[i][j] = ans[i][j] + temp;
            }
        }
    }


    int kamu = P-1;
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            if(j < kamu)cout << ans[i][j] << " ";
            else cout << ans[i][j];
        }
        cout << endl;
    }


    return 0;
}

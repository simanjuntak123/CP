#include<bits/stdc++.h>

using namespace std;
int cek[100001];
vector<int> data;
vector<int> dat;
vector<int> da;

int main(){
    int n; cin >> n;
    int l;

    int x = INT_MIN;
    for(int i=0; i<n; i++){
        cin >> l;

        cek[l]++;
        dat.push_back(l);
        if(cek[l] != 0){
            data.push_back(cek[l]);
        }


    }
    for(int i=0; i<data.size(); i++){
            x = max(x, data[i]);
        }
    for(int i=0; i<dat.size(); i++){
        if(data[i] == x){
            da.push_back(dat[i]);
        }
    }
    int m = INT_MIN;
    for(int i=0; i<da.size(); i++){
        m = max(m, da[i]);
    }

    cout << m << endl;

    return 0;
}

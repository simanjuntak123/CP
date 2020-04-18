#include<bits/stdc++.h>

using namespace std;
vector<int>data, mak;

int main(){
    int n;cin>>n;

    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        data.push_back(x);
    }

    for(int i=1; i<=100000; i++){
        int ct = 0;
        for(int j=0; j<data.size(); j++){
            if(i % data[j]==0){
                ct++;
            }
        }
        if(ct == data.size()){
            mak.push_back(i);
        }
        //cout << ct << " " << data.size() << endl;

    }

    //for(int i=0; i<mak.size(); i++){
        cout << mak[0] << endl;
    //}

    return 0;
}

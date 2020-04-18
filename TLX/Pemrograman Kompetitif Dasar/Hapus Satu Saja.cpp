#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    if(a.size() - b.size() == 1){
        int aa = 0, bb=0;
        int temp = 0;
        while(aa < a.size() && bb < a.size()){
            if(a[aa] == b[bb]){
                aa++;
                bb++;
            }else{
                temp++;
                aa++;
            }
        }
        if(temp == 1) cout << "Tentu saja bisa!" << endl;
        else cout << "Wah, tidak bisa :(" << endl;
    }else{
        cout << "Wah, tidak bisa :(" << endl;
    }
    return 0;
}

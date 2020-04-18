#include<bits/stdc++.h>

using namespace std;
int main(){
    string as; cin >> as;
    int l;cin >> l;
    string ma, mam, cek;
    int temp = 0;
    for(int i=0;i<as.size(); i++){
        if(as[i] == '*'){
            temp = i;
        }
    }
    if(temp != 0){
        string tkp = as.substr(0, temp);
        string ktp = as.substr(temp+1, as.length());
        if(tkp.size() !=0 && ktp.size() == 0){
            string  bagau = as;
            bagau.erase(bagau.begin()+temp);
            for(int i=0; i<l; i++){
                cin >> ma;
                mam = ma.substr(0,(as.length()-1));
                if(bagau.compare(mam) == 0)cout <<  ma << endl;
            }
        }else{
            reverse(ktp.begin(), ktp.end());
            for(int i=0; i<l; i++){
                cin >> ma;
                string masko = ma;
                reverse(ma.begin(), ma.end());
                mam = ma.substr(0,(ktp.length()));
                cek = masko.substr(0,temp);
                //cout << cek << " " << mam << " "  << ktp  <<  " " << tkp << endl;
                if(ktp.compare(mam) == 0 && tkp.compare(cek) == 0 && (tkp.size() + ktp.size()) <= ma.size())cout << masko << endl;
            }
        }
    }
    else {
        string  bagau = as;
        bagau.erase(bagau.begin()+temp);
        reverse(bagau.begin(), bagau.end());
        for(int i=0; i<l; i++){
            cin >> ma;
            string masko = ma;
            reverse(ma.begin(), ma.end());
            mam = ma.substr(0,(as.length()-1));
            if(bagau.compare(mam) == 0)cout << masko << endl;
        }
    }
    return 0;
}

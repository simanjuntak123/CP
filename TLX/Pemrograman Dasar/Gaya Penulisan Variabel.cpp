#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string s1 = "_";

    for(int i=0; i<s.length(); i++){
        if(s[i] >='A' && s[i] <='Z'){
            s[i] = s[i] + 32;
            s.insert(i, s1);
        }
        else if(s[i] == '_'){
            s[i+1] = s[i+1] - 32;
            s.erase(s.begin()+i);

        }


    }
    cout << s << endl;

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2,s3,s4; cin >> s1 >> s2 >> s3 >> s4;
    int l = s2.length();
    size_t found = s1.find(s2);
    if (found!=std::string::npos){
        s1.erase(found,l);
    }
    int l1 = s3.length();
    size_t found1 = s1.find(s3);
    if (found1!= std::string::npos){
        s1.insert((found1+l1),s4);
    }
    cout << s1 << endl;
}

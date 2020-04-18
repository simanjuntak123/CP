#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int gcd(ll a, ll b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}
int main() {
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll ans = (b*d)/gcd(b, d);
    ll hasil = (ans/b) * a;
    ll hasil1 = (ans/d) * c;

    ll baru =  (hasil1 + hasil);// << " " << ans << endl;
    int temp = gcd(baru, ans);

    if(temp == 1){
        cout << (hasil1 + hasil) << " " << ans << endl;
    }else{
        cout << (hasil1 + hasil)/temp << " " << ans /temp << endl;
    }

   return 0;
}

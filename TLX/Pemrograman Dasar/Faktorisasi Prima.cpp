#include<bits/stdc++.h>
using namespace std;
map<int, int>prime_;
vector<int>Prime;
void SieveOfEratosthenes(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++){
        if (prime[p] == true){
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    int size_ = n;
    for (int p=2; p<=n; p++){
        if (prime[p]){
            while(size_ % p == 0 && size_ != 0){
                size_ /=  p;
                prime_[p]++;
                if(prime_[p] == 1)Prime.push_back(p);
            }
        }
    }
    for(int i=0; i<Prime.size(); i++){
        if(i < Prime.size()-1){
            if(prime_[Prime[i]] != 1)cout<<Prime[i]<<"^"<<prime_[Prime[i]]<<" x ";
            else cout<<Prime[i]<<" x ";
        }
        else{
            if(prime_[Prime[i]] != 1)cout<<Prime[i]<<"^"<<prime_[Prime[i]];
            else cout<<Prime[i];
        }
    }
    cout<<endl;
}
int main(){
    int n;cin>>n;
    SieveOfEratosthenes(n);
}

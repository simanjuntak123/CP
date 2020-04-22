#include<bits/stdc++.h>

using namespace std;
int arra[1005], arrb[1005];

void Swap(char a, int x1, char b, int y1){
    if(a=='A' && b=='A'){
        swap(arra[x1],arra[y1]);
    }
    else if(a=='B' && b=='B'){
        swap(arrb[x1],arrb[y1]);
    }
    else if(a=='A' && b=='B'){
        swap(arra[x1],arrb[y1]);
    }
    else{
        swap(arrb[x1],arra[y1]);
    }

}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin >>arra[i];
    }
    for(int i=0; i<n; i++){
        cin >>arrb[i];
    }

    int a, x1,y1;cin>>a;
    char x,y;
    for(int i=0; i<a; i++){
        cin>>x>>x1>>y>>y1;
        Swap(x,x1-1,y,y1-1);
    }
    for(int i=0; i<n; i++){
        if(i==n-1)cout<<arra[i]<<endl;
        else cout<<arra[i]<<" ";
    }
    for(int i=0; i<n; i++){
        if(i==n-1)cout<<arrb[i]<<endl;
        else cout<<arrb[i]<<" ";

    }
    return 0;
}

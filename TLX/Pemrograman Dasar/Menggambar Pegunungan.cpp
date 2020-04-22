#include<bits/stdc++.h>
using namespace std;
void draw(int a)
{
    if(a > 0){
        draw(a-1);
        for(int i=1; i<=a; i++)
            cout<<"*";
        cout<<endl;
        draw(a-1);

    }
}

int main()
{
    int n;
    cin>>n;
    draw(n);
    return 0;
}

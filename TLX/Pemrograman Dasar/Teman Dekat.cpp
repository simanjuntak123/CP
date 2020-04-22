#include<bits/stdc++.h>

using namespace std;
vector <int> data;
vector <int> data1;
vector <int> data2;
int main()
{
    int N, D;
    cin >> N >> D;

    int x, y, l, k;
    int ans = 0;
    for(int i=0; i<N; i++)
    {
        cin >> x >> y;

        data1.push_back(x);
        data2.push_back(y);
    }

    //int ans = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(i >= 1)
                ans = pow(abs(data1[i] - data1[j]), D) + pow(abs(data2[i] - data2[j]), D);
            data.push_back(ans);
        }
    }

    int minn = INT_MAX, maxx = INT_MIN;
    for(int i=0; i<data.size(); i++)
    {
        minn = min(minn, data[i]);
        maxx = max(maxx, data[i]);
        //cout << data[i]  <<  " ";
    }
    cout << minn <<  " " << maxx << endl;


    return 0;
}

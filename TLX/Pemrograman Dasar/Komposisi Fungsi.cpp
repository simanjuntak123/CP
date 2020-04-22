#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, k, x;
    cin >> a >> b >> k >> x;

    int tot = 0;
    for(int i=0; i<k; i++)
    {
        tot = abs((a*x) + b);
        x = tot;
    }

    cout << tot  << endl;
    return 0;
}

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long x1, x2, y1, y2, jarak;

    cin>> x1 >> y1 >> x2 >> y2;
    jarak = abs((x1 - x2)) + abs((y1 - y2));
    cout<< jarak <<endl;

    return 0;
}

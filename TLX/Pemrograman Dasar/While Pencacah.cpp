#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int n, sum = 0;

    while(true){
        cin>> n;
        if(cin.good()){
            sum += n;
        }else{
            break;
        }
    }
    cout<< sum << endl;

    return 0;
}

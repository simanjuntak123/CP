#include<iostream>
using namespace std;

int main()
{
    int N;

    cin>> N;
    if(N >= 10000){
        cout<< "puluhribuan" << endl;
    }else if(N >= 1000){
        cout<< "ribuan" << endl;
    }else if(N >= 100){
        cout<< "ratusan" << endl;
    }else if(N >= 10){
        cout<< "puluhan" << endl;
    }else if(N >= 0){
        cout<< "satuan" << endl;
    }


    return 0;
}

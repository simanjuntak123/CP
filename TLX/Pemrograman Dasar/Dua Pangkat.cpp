#include<iostream>

using namespace std;

int main()
{
    int i, N, sum = 1;

    cin>> N;
    for(i = 0; i < N; i++){
        if(sum == N){
            break;
        }else{
            sum *= 2;
        }
    }
    if(sum == N)
        cout<< "ya" << endl;
    else
        cout<<"bukan" <<endl;

    return 0;
}

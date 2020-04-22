#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double N, T;
	int F, C;

	cin>> N;
	T = trunc(N);

	if(N == T){
		C = N;
		F = N;
	}else if(N < 0){
		C = N;
		F = N - 1;
	}else{
		F = N;
		C = N + 1;
	}
	cout<< F << " " << C << endl;

	return 0;
}

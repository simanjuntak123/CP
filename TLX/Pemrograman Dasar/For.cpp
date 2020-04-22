#include<iostream>

using namespace std;

int main()
{
	int n, i, j, sum = 0;

	cin>> n;

	for(i = 0; i < n; i++){
		cin>> j;
		sum += j;
	}
	cout<< sum <<endl;

	return 0;
}

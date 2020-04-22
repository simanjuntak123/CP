#include<iostream>

using namespace std;

int main()
{
	int i, n, k;

	cin>> n >> k;
	for(i = 1; i <= n; i++){
		if(i % k == 0){
			if(i == n){
				cout<< "*";
			}else{
				cout<< "* ";
			}
		}else{
			if(i == n){
				cout<< i;
			}else{
				cout<<i <<" ";
			}
		}
	}
	cout<< endl;

	return 0;
}

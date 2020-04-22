#include<iostream>

using namespace std;

int main()
{
	int i, n;

	cin>> n;
	for(i = 1; i <= n ; i++){
		if(i%10 == 0){
			continue;
		}else if(i == 42){
			cout<< "ERROR" <<endl;
			break;
		}else{
			cout<< i <<endl;
		}
	}

	return 0;
}

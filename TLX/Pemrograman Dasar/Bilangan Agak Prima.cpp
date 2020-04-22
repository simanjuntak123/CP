#include <bits/stdc++.h>

using namespace std;
int main(){
	int N, kl, count;
	int temp;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> kl;


			temp = sqrt(kl);
			count=0;
			for(int j=2; j<= temp ; j++){
				if( kl % j == 0){
					count ++;
				}
			}
			if(count  < 2){
				cout << "YA" << endl;
			}
			else{
				cout << "BUKAN" << endl;
			}

	}


	return 0;
}

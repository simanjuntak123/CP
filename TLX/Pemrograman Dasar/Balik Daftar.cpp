#include <bits/stdc++.h>

using namespace std;

int main (){
	int arr[1000], i=0;

	while(cin >> arr[i]){
		i++;
	}
	for(int j=i-1; j>=0; j--){
		cout << arr[j] << endl;
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	string set;

	cin >> set;
	cin >> n;

	for(int i=0; i<set.length(); i++){
		int ter = set[i] + n;

		if(ter > 122){
			ter = ter - 26;
		}
		printf("%c", ter);
	}
	cout << endl;

	return 0;
}

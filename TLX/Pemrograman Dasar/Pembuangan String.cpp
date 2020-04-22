#include <bits/stdc++.h>

using namespace std;
int main(){
	string S, T;

	cin >> S >> T;

	for(int j=0; j< S.length(); j++){
		if(S[j] == T[0]){
			int k=0;
			for(int i=j; i< T.length() + j; i++){
				if( S[i] != T[k]){
					break;
				}
				k++;
			}
			if(k == T.length()){
				S.erase(S.begin() + j, S.begin() +(j+ k) );
				j = -1;
			}

		}
	}

	cout << S << endl;

	return 0;
}

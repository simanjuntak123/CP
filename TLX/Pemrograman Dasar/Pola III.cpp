#include<bits/stdc++.h>

using namespace std;
int main(){
	int i,j,k,o=0;
	scanf("%d",&k);

	for(i=0;i<k;i++){
		for(j=0;j<=i;j++){
			if(o > 9)o=0;
			printf("%d",o);
			o++;
		}
		printf("\n");
	}
	return 0;
}

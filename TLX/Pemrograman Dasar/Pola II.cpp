#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(c=1;c<=a;c++){
			if(b+c >= a+1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}



	return 0;
}

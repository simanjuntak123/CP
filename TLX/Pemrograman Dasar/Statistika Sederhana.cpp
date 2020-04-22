#include<bits/stdc++.h>

using namespace std;
int main(){
	int a,maxx=-9999,b,minn=9999,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d",&b);
		if(b>maxx){
			maxx=b;
		}
		if(b<minn){
			minn=b;
		}
	}printf("%d %d\n",maxx,minn);
	return 0;
}

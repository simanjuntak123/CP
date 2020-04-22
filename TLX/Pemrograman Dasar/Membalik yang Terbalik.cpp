#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, m; cin >> n >> m;
	int temp1=0, temp=0, i;

	do{
     	temp = (temp * 10) + (n % 10);
     	n = n / 10;
   	}
	   while(n > 0);{
   		  n = temp ;
	   }
	do{
     	temp1 = (temp1 * 10) + (m % 10);
     	m = m / 10;
   	}
	   while(m > 0);{
   			  m = temp1;
	   }

   	int tot = temp1 + temp;
   	int ert=0;

   	do{
     	ert = (ert * 10) + (tot % 10);
     	tot = tot / 10;
   	}
	while(tot > 0);cout << ert << endl;

	return 0;
}

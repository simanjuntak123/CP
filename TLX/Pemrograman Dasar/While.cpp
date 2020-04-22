#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	string words;

	while(true){
		cin>> words;
		if(cin.good()){
			cout<< words <<endl;
		}else{
			break;
		}
	}

	return 0;
}

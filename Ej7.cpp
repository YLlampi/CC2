
#include <iostream>

using namespace std;

bool esPrimo(int n){
	for(int i =2; i<n/2 +1;i++){
		if(n%i ==0)
			return false;
	}
	return true;
}

int n(int a){
	int cont =0;
	int b=2;
	while(cont<a){
		if(esPrimo(b)){
			cont++;
			b++;
		}
		else b++;
	}
	return b-1;		
}

int main(){
	int a;
	cin>>a;
	cout<<n(a)<<'\n';
		
	return 0;
}

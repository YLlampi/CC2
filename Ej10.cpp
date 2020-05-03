#include <bits/stdc++.h>

using namespace std;

bool esPrimo(int n){
	for(int i =2; i<n/2 +1;i++){
		if(n%i ==0)
			return false;
	}
	return true;
}

long long n(int a){
	long long s=0;
	//int cont =0;
	int b=2;
	while(b<a){
		if(esPrimo(b)){
			cout<<b<<'\n';
			s+=b;
			//cont++;
			b++;
		}
		else b++;
	}
	return s;		
}

int main(){
	int a=2000000;
	//cin>>a;
	cout<<n(a)<<'\n';
		
	return 0;
}

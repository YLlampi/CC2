#include <bits/stdc++.h>
using namespace std;
//optimizado
long a(int n){
	long as=0;
	bool b[n+1];
	fill_n(b,n+1,true);
	for(int i=2;i<=n;i++){
		int c=2;
		while(i*c<=n){
			b[i*c]=false;
			c++;
		}
	}
	for(int i=2;i<=n;i++){
		if(b[i]==true){
			as+=i;
		}
	}
	return as;
}

int main(){
	long b = a(2000000);
	cout<<b;
}

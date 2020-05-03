#include <bits/stdc++.h>

bool a(int n){
	for(int i=1;i<20;i++){
		if(n%i!=0){
			return false;
		}
	}
	return true;
}

int main(){
	int b=999999;	
	while(!a(b)){
		b++;
	}
	printf("%d \n",b);
	return 0;
}

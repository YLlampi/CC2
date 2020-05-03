#include <bits/stdc++.h>
using namespace std;
///*
bool v(int rt){
	int m=0;
	string n=to_string(rt);
	for(int i=n.size()-1;i>=0;i--){
		m *= 10;		
		m += (n[i]-'0');
	}
	
	if(rt==m) return true;
	else return false;
}

int main(){
	int fg,max=1;
	for(int i=100;i<1000;i++){
		for(int j=100;j<1000;j++){
			fg=i*j;
			if(v(fg)){
				if(fg>max){
					max=fg;
				}
			}
		}
	}
	printf("%d \n",max);
}

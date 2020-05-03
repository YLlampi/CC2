#include <bits/stdc++.h>
using namespace std;

bool s(int n){
	for(int i=2;i<(n/2);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	priority_queue <int> pq;
	long n;
	int a=2;
	cin>>n;
	while(n!=1){
		if(s(a) && n%a==0){
			n /=a;
			while(n%a==0){
				n/=a;
			}
		pq.push(a);
		}
		a++;
	}
	int na=pq.top();
	printf("%d \n",na);
}

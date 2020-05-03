#include <bits/stdc++.h>

int main(){
	int n=100,a,b,c;
	a=((n)*(n+1)*(2*n+1))/6;
	b=(((n)*(n+1))/2);
	c=(b*b)-a;
	printf("%d \n",c);
	return 0;
}

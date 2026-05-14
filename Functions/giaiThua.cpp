#include <stdio.h>

long long giaiThua(long long n){
	if(n == 1) return 1;
	return n*giaiThua(n-1);
}
int main(){
	//giai thua cua n;
	printf("%lld",giaiThua(3));
}

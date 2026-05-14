int ucln(int a,int b){
	if(a == 0) return b;
	if(b == 0) return a;
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}
int bcnn(int a,int b){
	if(a == 0 || b == 0) return 0;
	return (a/ucln(a,b))*b;
}

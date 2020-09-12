#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
long long power(long long  a) {
	long long x=1;
	for (long long i = 1; i <= a; i++) {
		x = x * 2;
	}
	return x;
}
void sum(long long result) {
	long long sum = 0,q;
	while (result > 0) {
		q = result % 10;
		sum += q;
		result =result/10;
	}
	printf("%d", sum);
}
int main() { 
	long long num,x;
	scanf("%lld", &num);
	x=power(num);
	sum(x);

	return 0;
}
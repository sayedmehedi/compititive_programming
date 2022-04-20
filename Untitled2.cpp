#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	long long a, b, c;
	a = 1, b = 3, c = 5;
	printf("%I64d %I64d %I64d\n", a, b, c);
	puts("*****************");

	printf("%I64d ", a);
	printf("%I64d ", b);
	printf("%I64d ", c);
	puts("");

	return 0;
}

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	int a;
	float b;
	double c;
	a = INT_MAX;
	b = FLT_MAX;
	c = DBL_MAX;
	printf("Size of a: %d, content of a: %d\n", sizeof(a), a);
	printf("Size of b: %d, content of b: %f\n", sizeof(b), b);
	printf("Size of c: %d, content of c: %f\n", sizeof(c), c);
}
#include <stdio.h>

int main() {
	double a, b;
	int d, r;
	double f;

	scanf ("%lf %lf", &a, &b);
	d = (int)a / (int)b;
	r = (int)a % (int)b;
	f = a / b;

	printf("%d %d %.6f\n", d, r, f);
	return 0;
}
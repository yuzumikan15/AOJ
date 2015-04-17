#include <stdio.h>
#include <math.h>

int main() {
	double r;
	double pi = M_PI;
	scanf("%lf", &r);

	printf("%.6f %.6f\n", r * r * pi, 2 * r * pi);
	return 0;
}
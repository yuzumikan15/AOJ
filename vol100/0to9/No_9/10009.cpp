#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	double r;
	cin >> r;
	double pi = M_PI;
	printf("%.6f %.6f\n", r * r * pi, 2 * r * pi);
  	return 0;
}